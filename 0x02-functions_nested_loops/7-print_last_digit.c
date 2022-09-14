#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @l: number to be entered
 *
 * Return: the last digit
 */
int print_last_digit(int l)
{
	l = l % 10;
	if (l < 0)
	{ l *= (-1);
	}
	return (l);
	
	_putchar('\n');
	return (0);
}
