#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		if (b > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	else if (b > a && b > c)
	{
		if (c > a)
		{
			largest = c;
		}
		else
		{
			largest = a;
		}
	}
	else if (c > a && c > b)
	{
		if (a > b)
		{
			largest = a;
		}
		else
		{
			largest = b;
		}
	}

	return (largest);
}
