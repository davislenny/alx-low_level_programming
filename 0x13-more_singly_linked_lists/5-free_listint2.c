#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer to head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
