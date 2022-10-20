#include <stdio.h>

/**
*main - entry point
*Description: (print ascending numbers with , between)
*Return:0
*
*/

int main(void)
{
int x = '0';

while (x <= '9')
	{
	putchar(x);
		if (x != '9')
		{
		putchar(',');
		putchar(' ');
		}
	x++;
	}
	putchar('\n');

return (0);
}
