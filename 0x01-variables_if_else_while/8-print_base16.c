#include <stdio.h>
/**
*main - entry point
*Description: (use putchar only 3 times to print 0123456789abcdef)
*Return:0
*
*/

int main(void)
{
int x = '0';
int y = 'a';

while (x <= '9')
	{
	putchar(x);
	x++;
	}
while (y <= 'f')
	{
	putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}
