#include "lists.h"
/**
 * sum_listint - sum all list elements
 * @head: pointer to the first element
 * Return: sum of the elements
 */
int sum_listint(listint_t *head)
{
	int n, m;

	if (head == NULL)
		return (0);
	n = head->n;
	while (head->next)
	{
		m = (head->next)->n;
		n += m;
		head = head->next;
	}
	return (n);
}
