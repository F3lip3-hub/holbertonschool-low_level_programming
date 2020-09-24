#include "holberton.h"

/**
* print_alphabet - Lowercase Alphabet
*
*
* Return: Void
*/
void print_alphabet(void)
{
	char L;

	for (L = 'a'; L <= 'z'; ++L)
	{
		_putchar(L);
	}
	_putchar('\n');
}

