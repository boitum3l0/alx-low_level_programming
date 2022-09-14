#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 *
 * @n: argument input
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = 98; n > 98; n--)
		{	printf("%d\n", n);
		}
	}
	else if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{	printf("%d\n", n);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
