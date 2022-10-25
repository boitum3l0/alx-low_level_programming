#include <stdio.h>

/**
 * main - print single digits from 0
 * Return: 0
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
	{
		putcar(num + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
