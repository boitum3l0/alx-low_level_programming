#include "main.h"

/**
 * print_most_numbers - prints all accept 4 and 9
 * Return: all numbers except 4 and 9
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '4' && n == '9')
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}
