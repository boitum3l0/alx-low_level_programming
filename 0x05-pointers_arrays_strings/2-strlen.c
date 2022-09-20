#include "main.h"

/**
 * _strlen - returns length of string
 * @s: character argument
 * Return: length of string
 */

int _strlen(char *s)
{
	int arrlen;

	for (arrlen = 0; *s[arrlen] != '\0'; arrlen++)
	{
		return (arrlen);
	}
	return (0);
}
