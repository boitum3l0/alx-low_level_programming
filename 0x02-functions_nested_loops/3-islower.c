#include "main.h"
/**
 * _islower - looks for lowercase
 *
 * @c: argument
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{	return (1);
	}
	else
	{	return (0);
	}
	_putchar('\n');
	return (0);
}
