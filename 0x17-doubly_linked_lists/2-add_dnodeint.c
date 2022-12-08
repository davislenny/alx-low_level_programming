#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: pointer to head node
 * @n: int element
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;

	if (!*head)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}

