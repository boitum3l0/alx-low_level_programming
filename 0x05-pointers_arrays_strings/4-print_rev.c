#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string value to print
 * Return: void
 */
void print_rev(char *s)
{	
	int j = strlen(s);

	while (j >= 0)
	{
		_putchar(s[j]);
	}
	j--;
	_putchar('\n');
}
