#include <stdio.h>
/**
*main - entry point
*Description: (with putchar print lowercase alphabet except q & e)
*Return:0
*
*/

int main(void)
{
int a = 'a';
int e = 'e';
int q = 'q';
int z = 'z';

while (a <= z)
	{
	if ((a != e) && (a != q))
		{
		putchar(a);
		}
	a++;
	}
	putchar('\n');

	return (0);
}
