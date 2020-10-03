#include "holberton.h"

/**
* _puts - print a string
* @str: string to print
*
*
*/
void _puts(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
