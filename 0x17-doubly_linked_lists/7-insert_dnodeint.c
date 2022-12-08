#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: points o the head node of a list
 * @idx: position to insert
 * @n: node integer
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!h || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;

	if (!idx)
	{
		new->prev = NULL;
		new->next = *h ? *h : NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (i == idx - 1)
		{
			new->prev = temp;
			new->next = temp->next;
			if (new->next)
				new->next->prev = new;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
