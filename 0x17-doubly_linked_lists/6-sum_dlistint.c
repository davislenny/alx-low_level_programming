#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: points to head node of a list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
