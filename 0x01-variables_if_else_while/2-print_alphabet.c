#include <stdio.h>
/**
 * main - entry point
 *
 * Return - alphabets
 */
int main(void)
{
	char alpha;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (alpha = 'a'; alpha < = 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n')
}
