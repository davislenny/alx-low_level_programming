#include "lists.h"
/**
 * free_list - frees list_t
 * @head: pointer to the head node
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *temp, *new_node;

	temp = head;
	while (temp)
	{
		new_node = temp->next;
		free(temp->str);
		free(temp);
		temp = new_node;
	}
}
