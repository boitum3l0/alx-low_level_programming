#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: input argument
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				if (x == y)
				{
					_putchar("\\n");
				}
				else
				{
					_putchar(" ");
				}
			}
		}
	}
}
