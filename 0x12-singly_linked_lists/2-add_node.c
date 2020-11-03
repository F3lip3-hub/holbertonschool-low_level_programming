#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - prototype to add a new node
 * @head: start of the list
 * @str: variable string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int idx;

	idx = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	while (str[idx] != '\0')
	{
		idx++;
	}
	new_node->len = idx;
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);

}
