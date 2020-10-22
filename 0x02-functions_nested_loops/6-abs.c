#include "holberton.h"
/**
* _abs - prototype function
* @num: variable to compare
* Return: the variable created
*/
int _abs(int num)
{

	if (num > 0)
		return (num);
	if (num <= -1)
	{
		num = -1 * num;
		return (num);
	}
	else
		return (0);
}
