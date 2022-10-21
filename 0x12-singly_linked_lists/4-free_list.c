#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list `list_t`
 *
 * @head: linked listed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		tmp = head->next;

		free(head->str);
		free(head->head);

		head = tmp;
	}
}
