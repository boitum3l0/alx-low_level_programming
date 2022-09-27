#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination array
 * @src: source array
 * @n: number of bytes of copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
