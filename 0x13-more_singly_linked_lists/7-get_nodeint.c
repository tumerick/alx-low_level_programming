#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the nth node a `listint_t` linked list
 * where `index` is the index of the node, starting at 0
 *
 * @head: pointer to the head of a linked list
 * @index: the index of the node to be retrieved.
 *
 * Return: listint_t || NULL (Fail)
 */

listint_t get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *tmp_list = head;

	while (tmp_list && idx++ < index)
		temp_list = tmp_list->next;

	return (tmp_list ? tmp_list : NULL);
}
