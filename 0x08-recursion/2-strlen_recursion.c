#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string to check
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);

}
