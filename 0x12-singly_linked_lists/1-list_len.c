#include "lists.h"

/**
 * list_len - finds length of element in list_t
 * @h: pointer to struct
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	
	while (h !=NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
		
