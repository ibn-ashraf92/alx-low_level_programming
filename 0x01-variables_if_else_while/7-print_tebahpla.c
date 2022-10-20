#include <stdio.h>
/**
*main - entry point
*Description: (write lowercase alphabedic by while loop and putchar)
*Return:0
*
*/




int main(void)
{
int x = 'z';

while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	putchar ('\n');
	return (0);
}
