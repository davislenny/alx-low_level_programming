#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 * @head: pointer to head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new_node, *temp;

	temp = head;
	while (temp)
	{
		new_node = temp->next;
		free(temp);
		temp = new_node;
	}
}
