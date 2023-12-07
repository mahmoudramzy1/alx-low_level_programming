#include "lists.h"
/**
 * sum_dlistint - returns sum of all list's elements
 * @head: pointer to the header of the list
 * Return: the sum or NULL of empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
