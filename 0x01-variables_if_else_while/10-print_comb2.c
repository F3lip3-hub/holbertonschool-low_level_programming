#include <stdio.h>
/**
* main - putchar spaces and commas
*
*
* Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i <= 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

