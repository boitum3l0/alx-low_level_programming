#include "main.h"
/**
 * times_table - multiples of 9
 *
 * Return: multiples of 9
 */
void times_table(void)
{
	int nine = 0;

	do {
		nine *= 9;
		_putchar(nine + '0');
	} while (nine <= 9);
	nine++;
}
