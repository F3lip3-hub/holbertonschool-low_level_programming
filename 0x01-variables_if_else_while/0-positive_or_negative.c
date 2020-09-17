#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/*If n is positive*/
	if (n > 0) {
		printf("is positive"\n);
	
	/*if else is zero*/
	}else if(0 == 0)
		printf("its zero"\n);
}
