#include "main.h"

/**
 * _strcat - concatenates two strings
 * *dest: string 1
 * *src: string 2
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[b] !='\0'; a++)
	for (b = 0; src[b] !='\0'; b++)
	{
		dest[a] = src[b];
	}
	str[a] = '\0';
	_putchar(str[a]);
}
