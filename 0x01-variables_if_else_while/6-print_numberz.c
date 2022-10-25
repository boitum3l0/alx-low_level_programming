#include <stdio.h>

/**
 * main - print single digit numbers
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		putchar(count + '0');
	}
	putchar('\n');
	return (0);
}
