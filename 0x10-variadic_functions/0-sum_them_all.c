#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - function prototype
* @n: start of the list
* Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list lst;

	if (n == 0)
	{
		return (0);
	}

	va_start(lst, n);

	for (; i < n; i++)
	{
	sum += va_arg(lst, int);
	}

	va_end(lst);
	return (sum);
}
