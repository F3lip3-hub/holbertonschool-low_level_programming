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

	va_list variadic_list;

	va_start(variadic_list, n);

	for (; i < n; i++)
	{
	sum += va_arg(variadic_list, int);
	}

	return (sum);
}
