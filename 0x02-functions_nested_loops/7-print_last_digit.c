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
	return (l);
	_putchar("%l\n");
	return (0);
}
