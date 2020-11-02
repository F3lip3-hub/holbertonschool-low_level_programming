#include "lists.h"
/**
* print_list - prints the list typedef
* @h: node to list
* Return: amount of nodes
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
			printf("[%i] %s\n", h->len, h->str);

			h = h->next;
		len++;
	}
	printf("\n");
	return (len);
}
