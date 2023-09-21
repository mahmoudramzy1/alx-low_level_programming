#include "lists.h"
/**
 * list_len - return list length
 * @h: pointer to first node
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			return (0);
		h = h->next;
		i++;
	}
	return (i);
}
