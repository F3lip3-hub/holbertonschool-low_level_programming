#include "holberton.h"
/**
* _isdigit - shows who is a digit #
* @c: variable with alternatives
*
*
* Return: Always 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
	return (0);
}
