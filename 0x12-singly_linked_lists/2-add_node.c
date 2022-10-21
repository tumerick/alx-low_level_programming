#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a `list_t` list.
 *
 * @head: head of the list
 * @str: <string?
 *
 * Return: address of the new element || NULL (Fail)
 */

list_t *add_node(list_t **head, const char *str)
{
	char *cpy_str;
	list_t *new_node;
	
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
	new_ndoe->len = strlen(cpy_str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
