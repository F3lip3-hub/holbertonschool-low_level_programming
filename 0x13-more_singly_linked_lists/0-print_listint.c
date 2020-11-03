#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint - prototype to print the list
 * @h: variable head
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t b = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		b++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (b);
}
