#include "holberton.h"

/**
* swap_int - Change the values of two integers
*
* @a: changes to the value of b
* @b: changes to the value of a
*
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
