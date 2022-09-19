#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string value to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] > 0)
	{
		_putchar(s['\0']);
		i--;
	}
	_putchar('\n');
}
