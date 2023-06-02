#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments list
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int idx;
	int sum = 0;
	int check = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				check++;
				printf("Error\n");
				break;
			}
		}
		if (check > 0)
			break;
	}

	if (check == 0)
	{
		for (idx = 1; idx < argc; idx++)
			sum += atoi(argv[idx]);
		printf("%d\n", sum);
	}

	return (0);
}
