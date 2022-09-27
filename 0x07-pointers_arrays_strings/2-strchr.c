#include "main.h"

/**
 * _strchr - finds characters in a string
 * @s: string to check through
 * @c: character to search for
 * Return: c
 */
char *_strchr(char *s, char c);
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
