#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of
 * @x: main int
 * @y: int input
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	int res = 1;
	int i = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (i <= y)
	{
		res *= x;
		_pow_recursion(i++);
	}
	return (res);
}
