#include "holberton.h"
#include <stdio.h>
/**
 * main - counts arguments given
 * @argc: argument counter
 * @argv: argument vector
 * Return: main program result
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}
