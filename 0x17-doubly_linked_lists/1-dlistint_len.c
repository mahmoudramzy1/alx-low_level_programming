#include "lists.h"
/**
 * dlistint_len - counts the list elements
 * @h: pointer to the header of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
