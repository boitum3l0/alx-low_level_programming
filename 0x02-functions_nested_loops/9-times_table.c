#include "main.h"
/**
 * times_table - multiples of 9
 *
 * Return: multiples of 9
 */
void times_table(void)
{
	int nine = 0;
	int prod = 0;

	do {
		prod = nine *= 9;
		_putchar(prod + '0');
	} while (nine <= 9);
	nine++;
}
