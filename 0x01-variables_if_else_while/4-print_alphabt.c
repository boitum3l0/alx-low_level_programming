#include <stdio.h>

/**
 * main - print alphabet in lower then uppercase except q & e
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' && alpha == 'e')
		{
			continue;
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
