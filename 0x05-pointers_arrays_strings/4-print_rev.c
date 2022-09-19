#include "main.h"
#include "_strlen.c"

/**
 * print_rev - prints a string in reverse
 * @s: string value to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int n = _strlen(s);

	while (n > i)
	{
		_putchar(s[i]);
		i--
	}
	_putchar('\n');
}
