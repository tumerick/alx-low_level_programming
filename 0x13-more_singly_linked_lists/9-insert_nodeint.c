#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * `index` in the linked list
 *
 * @head: pointer to a linked list
 * @idx: the new nodes position
 * @n: value for the new node
 *
 * Return: <listint_t> || NULL (Fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new_node;
	listint_t *tmp_list = *head;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (; tmp_list && index < idx; index++)
	{
		if (index != idx - 1)
		{
			tmp_list = tmp_list->next;
			continue;
		}

		new_node->next = tmp_list->next;
		tmp_list->next = new_node;
		return (new_node);
	}

	return (NULL);
}
