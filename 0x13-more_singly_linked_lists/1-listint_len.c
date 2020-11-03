#include "lists.h"
/**
 * listint_len - prototype to list the length
 * @h: variable head
 * Return: listint_len
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h != NULL)
	{
		b++;
		h = h->next;
	}
	return (b);
}
