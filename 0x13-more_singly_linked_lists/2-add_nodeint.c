#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head node
 * @n: new int element list
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	while (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
