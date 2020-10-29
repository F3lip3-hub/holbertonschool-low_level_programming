#include "holberton.h"
/**
* print_last_digit - prototype for last digit function
* @l: variable type integer
* Return: the last digit
*/
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	return (l);
}
