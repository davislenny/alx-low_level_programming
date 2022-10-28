#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *new_node = NULL;

	if (!head || !*head)
		return (NULL);

	temp = *head;
	*head = NULL;
	while (temp)
	{
		new_node = temp->next;
		temp->next = *head;
		*head = temp;
		temp = new_node;
	}
	return (*head);
}
