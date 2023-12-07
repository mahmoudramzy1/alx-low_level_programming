#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of the list
 * @head: pointer to the header of the list
 * @n: new element data
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!head || !newnode)
		return (newnode ? free(newnode), NULL : NULL);

	newnode->n = n;
	newnode->prev = NULL;
	if ((*head) != NULL)
	{	
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
