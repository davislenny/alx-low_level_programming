#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head; pointer to head node
 * @index: the index fo deletion
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *node;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			node->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		node = temp;
		temp = temp->next;
	}
	return (1);
}
