#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first argument
 * @b: second arguement
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
