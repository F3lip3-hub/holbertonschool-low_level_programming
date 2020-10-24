#include "holberton.h"
/**
* print_numbers - prototype that prints the numbers given
*/
void print_numbers(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
