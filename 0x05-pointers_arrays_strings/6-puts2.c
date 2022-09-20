#include "main.h"

/**
 * puts2 - prints ever other character
 * @str: string input
 * Return: void
 */
void puts2(char *str)
{
	int o;

	while (str[o] != '\0')
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
			o++;
		}
	return (0);
}
