#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: points to head node of a list
 * @n: node integer
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
