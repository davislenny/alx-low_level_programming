#include "lists.h"
/**
 * add_node - adds a new node 
 * @head: pointer 1st node
 * @str: new node string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
