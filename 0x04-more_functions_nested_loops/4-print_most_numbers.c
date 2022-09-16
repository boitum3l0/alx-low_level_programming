#include "main.h"

/**
 * print_most_numbers - prints all accept 4 and 9
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '4' || n == '9')
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}
