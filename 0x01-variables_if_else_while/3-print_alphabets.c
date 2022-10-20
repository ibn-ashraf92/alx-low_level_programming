#include <stdio.h>
/**
*main - entry pint
*Description: (ust putchar only to print alphabetic lowercase then uppercase)
*Return:0
*
*/

int main(void)

{
int a = 'a';
int s = 'A';

while (a <= 'z')
	{
	putchar(a);
	a++;
	}
while (s <= 'Z')
	{
	putchar(s);
	s++;
	}
	putchar('\n');
}
