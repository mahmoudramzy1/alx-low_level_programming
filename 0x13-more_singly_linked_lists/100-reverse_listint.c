#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: pointer to the first element intthe list
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *s, *m;

	if (head == NULL || *head == NULL)
		return (NULL);
	s = *head;
	*head = s->next;
	s->next = NULL;
	while (*head)
	{
		m = (*head)->next;
		(*head)->next = s;
		if (m == NULL)
			return (*head);
		s = *head;
		*head = m;

	}
	return (NULL);
}
