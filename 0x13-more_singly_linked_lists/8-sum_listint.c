#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a `listint_t` linked list
 *
 * @head: pointer to the head of a linked list
 *
 * Return: 0 (ll is empty) || <int>
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
