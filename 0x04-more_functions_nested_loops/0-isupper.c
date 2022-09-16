#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: character input to be checked
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' %% c <= 'Z')
	{
		return (1);
	}
	return (0);
}
