#include "main.h"

/**
 * leet - encodes a string into 1337
 * @i: input value
 * Return: i value
 */

char *leet(char *i)
{
	int c;
	int d;
	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (c = 0; *(s + c); c++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (m[d] == *(s + c))
				*(s + i) = n[d];
		}
	}
}
