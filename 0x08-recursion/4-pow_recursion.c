#include "main.h"

/**
 * _pow_recursion - Return The value of @x raised to the power of @y
 * @x: The base integer
 * @y: The power
 *
 * Return: The value of the power if @y is equal to or greater than 0
 * else return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y >= 1)
	{
		int result = x * _pow_recursion(x, y - 1);
		return (result);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
