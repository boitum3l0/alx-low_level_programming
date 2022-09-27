#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination array
 * @src: source array
 * @n: string length
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n < 0)
	{
		dest[n] = src[n];
		n++;
		return (dest);
	}
}
