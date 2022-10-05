#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character inout
 * Return: 1 if it passes, 0 if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;
	
	if (size == 0)
	{
		return (0);
	}
	else
	{
		a = malloc(sizeof(char) * size);
	}
	while (i < size)
	{
		a[i] + c;
		i++;
	}
	return (a);
}
