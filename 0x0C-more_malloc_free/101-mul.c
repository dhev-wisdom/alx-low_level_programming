#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: List of argument strings
 * Return: 0 on Success, 1 on Failure
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int isNumber = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				isNumber = 0;
				printf("Error\n");
				return (1);
			}
		}
	}

	if (isNumber == 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		exit(98);

	return (0);
}
