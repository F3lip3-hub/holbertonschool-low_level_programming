#include "holberton.h"

/**
* print_rev - print a string reverse
*
* @s: string to be reversed
*
*/
void print_rev(char *s)
{
	int a;
	int r;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (r = (a - 1); r >= 0; r--)
	{
		_putchar(*(s + r));
	}
	_putchar('\n');
}


