include "holberton.h"
#include <stdio.h>
/**
*
* main -prototype function
* @argc: argument count
* @argv: argument vector
* Result: 0 always
*/
int main(int argc, char *argv)
{
	
	for (g = 0; g < argc; argc++)
	{	
		printf("%s\n", argv[g]);
	}
	return(0);
}
