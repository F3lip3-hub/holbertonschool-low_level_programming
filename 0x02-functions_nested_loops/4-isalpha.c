#include "holberton.h"
/**
* _isalpha - Main function
* @c: variable c
*
* Return: always 0
*/
int _isalpha(int c)
{
	if (c >= 'a' || c == 'z')
	return (1);

	else
	return (0);
}
