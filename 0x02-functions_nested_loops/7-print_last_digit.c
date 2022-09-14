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
	int lastDigit = l % 10;
	if (lastDigit < 0)
	{ lastDigit *= (-1);
	}
	return (lastDigit);
	
	_putchar('\n');
}
