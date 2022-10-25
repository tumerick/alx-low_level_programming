#include "lists.h"

/**
 * free_listint2 - frees the memory allocated to a `listint_t` list.
 *
 * @head: pointer to the head of a linked list
 */

void free_listint2(listint_t **head)
{
	listint_t = *tmp_list;

	if (!head)
		return;

	while (*head)
	{
		tmp_list = *(head)->next;
		free(*head);
		*head = tmp_list;
	}

	*head = NULL;
}
