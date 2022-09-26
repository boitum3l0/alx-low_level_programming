#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: string 1
 * @src: string 2
 * @n: max number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
