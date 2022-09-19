#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string value to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] > '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
