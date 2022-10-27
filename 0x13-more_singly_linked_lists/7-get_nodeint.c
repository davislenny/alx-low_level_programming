#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: node index starting from 0
 * Return: int n of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
	}
	return (temp);
}
