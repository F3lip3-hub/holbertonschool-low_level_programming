#include "holberton.h"
#include <stdio.h>
/**
* _strlen - Returns the length of a string
*
* @s: String variable
*
* Return: 0 always
*
*/
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0') 
	{
		c++;
	}
	return (c);
}
