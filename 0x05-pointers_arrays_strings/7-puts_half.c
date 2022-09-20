#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int c = 0;
	int d = strlen(str);

	if (d % 2 != 0)
	{
		int c = (d - 1) / 2;
	}
	_putchar(d % 2);
}
