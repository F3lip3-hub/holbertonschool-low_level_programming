#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*If n is greater than 0 say positive*/
	if (n > 0)
	printf("%i is positive\n", n);
	/*if else n is zero*/
	else if (n == 0)
	{printf("%i is zero\n", n);
	/*else zero is negative*/
	else
	printf("%i is negative\n", n);
	return (0);
}
