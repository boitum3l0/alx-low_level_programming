#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	return (0);
}
