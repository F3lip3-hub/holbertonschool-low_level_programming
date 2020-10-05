#include "holberton.h"

/**
* _isupper - Uppercase character
* @c: contains letters to be modified
*
* Return: If uppercase is true return 1 else 0
*/
int _isupper(int c)
{
	if (c == 'A' && c != 'a')
	{
	return (1);
	}
	return (0);
}

