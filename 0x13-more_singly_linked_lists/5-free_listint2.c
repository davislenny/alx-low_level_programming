#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer to head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new_node;

	temp = *head;
	while (temp)
	{
		new_node = temp->next;
		free(temp);
		temp = new_node;
	}
	*head = NULL;
}
