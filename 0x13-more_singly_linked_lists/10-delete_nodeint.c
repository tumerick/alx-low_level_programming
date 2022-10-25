#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at `index` of a
 * `listint_t` linked list
 *
 * @head: pointer to the head of a linked list
 * @index: index of the node to remove
 *
 * Return: 1 (Success) || -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *tmp_list = *head, *node = NULL;

	if (!*head)
		return (-1);

	if (idx == 0)
	{
		*head = (*head)->next;
		free(tmp_list);
		return (1);
	}

	while (idx++ < index - 1)
	{
		if (!tmp_list || !(tmp_list->next))
			return (-1);
		tmp_list = tmp_list->next;
	}

	node = tmp_list->next;
	tmp_list->next = node->next;
	free(node);

	return (1);
}
