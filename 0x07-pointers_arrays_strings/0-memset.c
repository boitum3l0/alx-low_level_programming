#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to s
 * @b: value
 * @n: seze of s
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char ptr = *s;
	char val = b;

	for (i = 0; i <= n; i++)
	{
		ptr[i] = val;
	}
	return (ptr);
}
