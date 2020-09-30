#include <stdio.h>
/**
* main - reverse print
*
*
*
* Return: Always 0
*/
int main(void)
{
	char L;

	L = 'z';

	while (L >= 'a')
	{
		putchar(L);
		L--;
	}
	putchar('\n');
	return (0);
}
