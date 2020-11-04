#include "lists.h"
/**
 *free_listint - prototype to free a list
 * @head: start of list
 */
void free_listint(listint_t *head)
{

	if (head != NULL)
	{
		free_listint(head->next);

	}
	free(head);
}
