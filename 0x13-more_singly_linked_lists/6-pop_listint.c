#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to head node
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
