#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of `listint_t` list.
 *
 * @head: pointer to the head of a linked list
 * @n: <int>
 *
 * Return: NULL (Fail) || addres of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
