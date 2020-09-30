#include <stdio.h>

/**
* main - Print lowercase alphabet
*
*
* Return: Always 0
*/
int main(void)
{
	char L;

	L = 'a';

	while (L <= 'z')
	{
	putchar(L);
	L++;
	}
	putchar('\n');
	return (0);
}
