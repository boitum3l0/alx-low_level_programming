#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true, 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] - s2[n] == 0 && s1[n] != '\0')
	{
		n++;
	}
	return (s1[n] - s2[n]);
}
