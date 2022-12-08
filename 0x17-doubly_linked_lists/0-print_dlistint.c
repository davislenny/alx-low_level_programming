#include "lists.h"

/**
 * print_dlistint - prints a list
 * @h: points to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node += 1;
	}
	return (node)
}
