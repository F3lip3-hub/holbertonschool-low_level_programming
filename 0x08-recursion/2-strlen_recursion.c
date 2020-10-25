#include "holberton.h"
/**
* _strlen_recursion - prototype string length with recursion
* @s: variable with string
*
* Return: string length
*/
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
