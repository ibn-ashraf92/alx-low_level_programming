#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - void
*Description: (last digit)
*Return:0
*
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int d;
	d = n % 10;

	if (d > 5)
	printf("Last digit of n is %d and is greater than 5\n", n);
	else if (d == 0)
	printf("Last digit of n is %d and is 0\n", n);
	else if (d > 6 || !0)
	printf("Last digit of n is %d and is less than 6 and 0\n", n);
	return (0);
}
