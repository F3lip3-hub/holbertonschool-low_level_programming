#include <stdio.h>
/**
* main - putchar spaces and commas
*
*
* Return: Always 0
*/
int main(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
		if (n <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

