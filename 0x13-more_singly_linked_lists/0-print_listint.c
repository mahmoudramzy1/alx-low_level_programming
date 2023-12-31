#include "lists.h"
/**
 * print_listint - prints list elements
 * @h: pointer to elements in list
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		i++;
	}
	return (i);
}
