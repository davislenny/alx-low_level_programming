#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 * @head: pointer to head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
