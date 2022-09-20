#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: string value to print
 * Return: void
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen; j >=0 ; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
