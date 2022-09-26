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

	for (i = 0; i <= n; i++)
	{
		buffer[i] = b; 
	}

	for (i = 0; i <= n; i++)
	{
		return (buffer[i]);
	}
}
