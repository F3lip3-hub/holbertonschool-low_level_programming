#include <string.h>
#include "holberton.h"
/**
* _strchr - Prototype to strchr
* @s: string to return
* @c: variable to f in main
* Return: Null
*/
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == c)
		return (&s[b]);
	}
	return (NULL);
}
