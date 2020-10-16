include "holberton.h"

/**
* _strcat - function to strcat
*
* @dest: one pointer
* @src: second pointer
*
* Return: to the dest
*/
char  *_strcat(char *dest, char *src)
{
	int s = 0;
	int t;

	while (dest[s] != '\0')
	{
		s++;
	}
	for (t = 0; src[t] != '\0'; t++)
	{
		dest[s] = src[t];
		s++;
	}

	dest[s] = '\0';

	return (dest);
}
