#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string value to print
 * Return: void
 */
void print_rev(char *s)
{
	int j;

	while  (j >= 0)
	{
		_putchar(s[j]);
	}
	j++
	_putchar('\n');
}
