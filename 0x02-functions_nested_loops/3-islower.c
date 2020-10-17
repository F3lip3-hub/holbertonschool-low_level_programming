#include "holberton.h"
/**
* _islower - prototype for lowecase loop
* @c: integer variable
* Return: 1 if true  0 if its false
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
