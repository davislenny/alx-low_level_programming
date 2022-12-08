#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: points to head node of a list
 * @index: node index
 * Return: address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
