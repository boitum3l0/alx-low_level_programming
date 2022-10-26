#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to list_t struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes= 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
