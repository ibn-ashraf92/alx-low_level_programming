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

	if ((n % 10) > 5)
		{
		int a = n % 10;

		printf("Last digit of %d is %d and is greater than 5\n", n, a);
		}
	else if ((n % 10) == 0)
		{
		int a = n % 10;

		printf("Last digit of %d is %d and is 0\n", n, a);
		}
	else if ((n % 10) > 6 || !0)
		{
		int a = n % 10;

		printf("Last digit of %d is %d and is less than 6 and 0\n", n, a);
		}
	return (0);
}
