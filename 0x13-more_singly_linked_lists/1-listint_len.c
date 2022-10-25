#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked `listint_t` list.
 *
 * @h: head node of a linked list
 *
 * Return: <size_t> number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_len = 0;

	while (h)
	{
		h = h->next;
		node_len++;
	}

	return (node_len);
}
