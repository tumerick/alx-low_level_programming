#include "lists.h"

/**
 * list_len - returns the number of elements in a linked `list_t` list
 *
 * @h: linked list
 *
 * Return: <size_t>
 */

size_t list_len(const list_t *h)
{
	size_t len;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
