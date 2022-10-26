#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 * @head: pointer to head node
 * @n: new node int element
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = mallo(sizeof(listint_t));
	listint_t *temp = *head;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL:
	new_node->n = n;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
