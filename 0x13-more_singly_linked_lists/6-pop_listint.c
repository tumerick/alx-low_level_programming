#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t`
 * and returns the head node's data
 *
 * @head: pointer to the head of a linked list
 *
 * Return: <int> || 0 (list is empty)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp_list;

	if (!head || !*head)
		return (0);

	n = (*head)->n;

	tmp_list = (*head)->next;
	free(*head);
	*head = tmp_list;

	return (n);
}
