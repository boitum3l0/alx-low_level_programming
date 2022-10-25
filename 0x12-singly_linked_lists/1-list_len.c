#include "lists.h"

/**
 * list_len - finds length of element in list_t
 * @h: pointer to struct
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr !=NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (count);
}
		
