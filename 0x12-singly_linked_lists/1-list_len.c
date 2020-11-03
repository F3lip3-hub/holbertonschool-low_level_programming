#include "lists.h"
/**
 * list_len - prototype to count the list length
 * @h: parameter pointer
 * return: variable to count
 */
size_t list_len(const list_t *h)
{
	int count;
	const list_t *next_item;

	next_item = h;
	while (next_item != NULL)
	{
		count++;
		next_item = next_item->next;
	}
	return (count);
}
