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
	last_digit = n % 10

	if (last_digit > 5)
	printf("Last digit of n is %d and is greater than 5\n");
	else if (last_digit == 0)
	printf("Last digit of n is %d and is 0\n");
	else if (last_digit > 6 || !0)
	printf("Last digit of n is %d and is less than 6 and 0\n", n);
	return (0);
}
