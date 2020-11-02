#include "holberton.h"
#include <stdio.h>
/**
* main - prototype function to return
* @argc: argument count
* @argv: argument vector
* Return: main program name
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[0]);
	return (0);

}
