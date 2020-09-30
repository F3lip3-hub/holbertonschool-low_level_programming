#include <stdio.h>
/**
* main - print using only putchar
*
*
* Return: ALways 0
*/
int main(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
