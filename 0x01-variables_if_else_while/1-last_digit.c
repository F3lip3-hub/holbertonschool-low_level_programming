#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
* Main - Will assign a random number 
*
*
* Return: 0 
*/
int main(void)
{
	int n, ult;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Printing random number */
	
	ult = n % 10;
	
	printf("Last digit of %d\n", n);
	if (ult > 6)
	{
		printf("is %d and is greater than 5\n", ult);
	}
		else if (ult == 0)
		{
			printf("is %d and is 0\n", ult);
		}
		else if (ult < 6)
		{
                	printf("is %d and is less than 6 and not 0\n", ult);
		}
	return (0);
}
