#include "main.h"

/**
 * _strncpy - copy a string to dest
 * @dest: array to copy string to
 * @src: string to copy
 * @n: length of string
 * Return: copy of string in dest
 */

char _strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
	}
	b++
	
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
