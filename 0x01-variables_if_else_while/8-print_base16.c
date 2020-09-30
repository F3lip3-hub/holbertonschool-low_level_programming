#include <stdio.h>
/**
* main - 16 characters
*
*
* Return: Always 0
*/
int main(void)
{

	int n;
	char l;

	n = '0';
	l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
