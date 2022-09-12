#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - centry point
 *
 * Results: always 0 (success)
 *
 */

gcc int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<= 0) {
		printf("%d is positive\n");
	} else if(n>= 0) {
	       printf("%d is negative\n");
	} else {
		printf("%d is zero";)
	}
		

	return (0);
}
