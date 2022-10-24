#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h->len = strlen(h->str);
		printf("[%u] %s\n", h->len, h->str ? h->str : "[0] (nil)");
		h = h->next;
		i++;
	}
	return (i);
}
