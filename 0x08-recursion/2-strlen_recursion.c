#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string to check
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s[l] != '\0')
	{
		_putchar(s[l]);
		_strlen_recursion(s + 1);
	}
}
