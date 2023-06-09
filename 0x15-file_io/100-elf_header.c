#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * print_error - prints error message to standard error
 * @msg: the error message
 */
void print_error(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
}

/**
 * print_elf_header - displays information from ELF header
 * @header: pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf(" %02x", header->e_ident[i]);
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Others");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              0x%x\n", header->e_type);
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int fd;
    ssize_t bytes_read;
    Elf64_Ehdr elf_header;
    off_t offset = 0;

    if (argc != 2)
    {
        print_error("Usage: elf_header elf_filename");
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error("Error: Unable to open file");
        return 98;
    }

    // Read the ELF header
    bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr))
    {
        print_error("Error: Unable to read ELF header");
        close(fd);
        return 98;
    }

    // Check if it's a valid ELF file
    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
    {
        print_error("Error: Not an ELF file");
        close(fd);
        return 98;
    }

    // Print the information from the ELF header
    printf("ELF Header:\n");
    print_elf_header(&elf_header);

    close(fd);
    return 0;
}
