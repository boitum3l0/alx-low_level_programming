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
	int i = 0;

	if (dest == 0)
	{
		return (NULL);
	}
	while (i < 0)
	{
		dest[i] = src[i];
		i++;
		return (dest);
	}
	return (0);
}
