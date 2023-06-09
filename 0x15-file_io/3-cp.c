#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * print_error - prints error message to standard error
 * @msg: the error message
 */
void print_error(const char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, appropriate error code otherwise
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, ret;
    ssize_t bytes_read, bytes_written;
    char buf[BUF_SIZE];

    if (argc != 3)
    {
        print_error("Usage: cp file_from file_to");
        return 97;
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        close(fd_from);
        return 99;
    }

    while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buf, bytes_read);
        if (bytes_written == -1)
        {
            print_error("Error: Can't write to file");
            close(fd_from);
            close(fd_to);
            return 99;
        }
    }

    if (bytes_read == -1)
    {
        print_error("Error: Can't read from file");
        close(fd_from);
        close(fd_to);
        return 98;
    }

    ret = close(fd_from);
    if (ret == -1)
    {
        print_error("Error: Can't close file descriptor");
        return 100;
    }

    ret = close(fd_to);
    if (ret == -1)
    {
        print_error("Error: Can't close file descriptor");
        return 100;
    }

    return 0;
}
