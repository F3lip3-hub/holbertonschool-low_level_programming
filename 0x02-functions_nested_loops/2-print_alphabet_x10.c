#include "holberton.h"
/**
* print_alphabet_x10 - 10 times the alphabet
*
*
* Void return
*/
void print_alphabet_x10(void)
{
	int l, c;

	/* Cantidad de veces repetido (10 veces) */
	for (c = 1; c <= 10; c++)
	{
		for(l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	_putchar('\n');
	}
}
