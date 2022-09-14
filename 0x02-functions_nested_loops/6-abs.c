#include "main.h"
/**
 * _abs(int) -  computes the absolute value of an integer
 *
 * Return: always 0
 */
int _abs(int d)
{
	if (d < 0)
	{ d = (-1) * d;
	}
	_putchar("%d", d);
	return (0);
}
