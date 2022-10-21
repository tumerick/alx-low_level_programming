#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a `list_t` list.
 *
 * @head: head of the linked list
 * @str: <string>
 *
 * Return: NULL (Fail) || address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy_str;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	cpy_str = strdup(str);
	if (!cpy_str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = cpy_str;
	new_node->len = strlen(cpy_str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
		return (*head);

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (*head);
}
