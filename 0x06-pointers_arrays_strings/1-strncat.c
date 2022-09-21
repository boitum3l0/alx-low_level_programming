#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: string 1
 * @src: string 2
 * @n: max number of bytes
 */

char *_strcat(char *dest, char *src, int n)
{
	int a;
	int b;
	
	for (a = 0; i < n && dest[a] != '\0'; a++)
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
