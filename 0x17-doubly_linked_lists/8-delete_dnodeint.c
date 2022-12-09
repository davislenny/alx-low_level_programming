#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: points to head node
 * @index: index to delete node
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *node;
	unsigned int i = 0;

	if (!*head || !head)
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
		if (index == i)
		{
			node->next = temp->next;
			if (temp->next)
				temp->next->prev = node;
			free(temp);
			return (1);
		}
		node = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
