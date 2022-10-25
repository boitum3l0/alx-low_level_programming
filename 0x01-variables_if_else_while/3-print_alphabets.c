#include <stdio.h>

/**
 * main - print alhpabet in lower then uppercase
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 65; alpha <= 90; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
