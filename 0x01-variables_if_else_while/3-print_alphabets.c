#include <stdio.h>

/**
* main - Print alphabet in lowercase and uppercase
*
*
* Return: Always 0
*/
int main(void)
{

	char L;
	char U;

	L = 'a';
	U = 'A';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
