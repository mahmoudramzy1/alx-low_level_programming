#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at the given index
 * @head: pointer to the head of the list
 * @index: index num
 * Return: 1 if succeeded -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	node = *head;
	while (i != index)
	{
		i++;
		node = node->next;
		if (node == NULL)
			return (-1);
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
