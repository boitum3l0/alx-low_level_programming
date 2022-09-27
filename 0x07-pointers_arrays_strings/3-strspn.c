#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to be checked
 * @accept: substring
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accepts[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s++;
				return (0);
			}
			j++;
		}
		if (s[j] == '\0')
		{
			return (s);
		}
		i++;
	}
	return (0);
}
