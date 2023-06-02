#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int func25(int number, int *change);
int func10(int number, int *change);
int func5(int number, int *change);
int func2(int number, int *change);

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments list
 *
 * Return: Always 0 (Success)
 * 1 on Failure
 */

int main(int argc, char *argv[])
{
	int num;
	int change = 0;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		func25(num, &change);
		printf("%d\n", change);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * func25 - multiples of 25
 * @num: number parameter
 * @change: change
 *
 * Return: Always 0
 */

int func25(int num, int *change)
{
	if ((num - 25) >= 0)
	{
		(*change)++;
		num -= 25;
		if (num >= 25)
			func25(num, change);
		else if (num > 0 && num < 25)
			func10(num, change);
		else
			return (0);
	}
	else
		func10(num, change);

	return (0);
}

/**
 * func10 - multiples of 10
 * @num: number parameter
 * @change: change
 *
 * Return: Always 0
 */

int func10(int num, int *change)
{
	if ((num - 10) >= 0)
	{
		(*change)++;
		num -= 10;
		if (num >= 10)
			func10(num, change);
		else if (num < 10 && num > 0)
			func5(num, change);
		else
			return (0);
	}
	else
		func5(num, change);

	return (0);
}

/**
 * func5 - multiples of 5
 * @num: number parameter
 * @change: change
 *
 * Return: Always 0
 */

int func5(int num, int *change)
{
	if ((num - 5) >= 0)
	{
		(*change)++;
		num -= 5;
		if (num >= 5)
			func5(num, change);
		else if (num > 0 && num < 5)
			func2(num, change);
		else
			return (0);
	}
	else
		func2(num, change);

	return (0);
}

/**
 * func2 - mulitiples of 2 and 1
 * @num: number parameter
 * @change: change
 *
 * Return: Always 0
 */

int func2(int num, int *change)
{
	if (num - 2 >= 0)
	{
		(*change)++;
		num -= 2;
		if (num >= 2)
			func2(num, change);
		else if (num > 0 && num < 2)
			(*change)++;
		else
			return (0);
	}
	else
		(*change)++;

	return (0);
}
