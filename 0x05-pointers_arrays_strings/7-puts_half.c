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
	
	_putchar(str(d) % 2);

	if (d % 2 != 0)
	{
		c = ((d - 1) / 2);
		_putchar(str(c) % 2);
	}
	
}
