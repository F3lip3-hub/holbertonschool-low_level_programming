#include "holberton.h"
/**
 * more_numbers - prototype to print numbers with putchar
 */
void more_numbers(void)
{
	int idx, nums;

	for (idx = 0; idx < 10; idx++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
			{
				_putchar(nums / 10 + '0');
			}
			_putchar(nums % 10 + '0');

		}
		_putchar('\n');

	}
}
