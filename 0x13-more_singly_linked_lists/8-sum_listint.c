#include "lists.h"

/**
 * sum_listint - Sums all data (n) of a listint_t
 * @head: pointer to head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
