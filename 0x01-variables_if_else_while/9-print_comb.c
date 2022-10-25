#include <stdio.h>

/**
 * main - print single digit numbers
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			purchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
