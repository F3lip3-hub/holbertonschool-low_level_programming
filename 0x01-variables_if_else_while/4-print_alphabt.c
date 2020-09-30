#include <stdio.h>

/**
* main - prints alphabet excluding some letters
*
*
* Return: 0 always
*/


int main(void)
{

	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
	if (L != 'q' && L != 'e')
		putchar(L);
	}

	putchar('\n');
	return (0);
}
