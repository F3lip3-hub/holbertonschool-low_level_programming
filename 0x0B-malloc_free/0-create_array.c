#include "holberton.h"
#include <stdlib.h>
/**
* create_array - Function with char type
* @size: size of the array
* @c: variable type char
* Return: the new array variable
*
*/
char *create_array(unsigned int size, char c)
{

	char *jodio_array = malloc(size * 1);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (jodio_array == NULL)
	{
		return (NULL);
	}

	while (i <= size)
	{
		jodio_array[i] = c;
		i++;
	}

	return (jodio_array);
}

