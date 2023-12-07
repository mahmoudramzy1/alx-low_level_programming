#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: pointer to the header of the list
 * @n: the data of the element to add
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
	{
		if (new)
			free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		new->prev = *head;
		(*head)->next = new;
		while ((*head)->prev)
		{
			*head = (*head)->prev;
		}
	}
	return (new);
}
