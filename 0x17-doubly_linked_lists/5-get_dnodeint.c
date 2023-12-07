#include "lists.h"
/**
 * get_dnodeint_at_index - gets node's data at index
 * @head: pointer to the header of the list
 * @index: the index of the node to get
 * Return: nth of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint *node;
	unsigned int i = 0;

	node = head;
	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
