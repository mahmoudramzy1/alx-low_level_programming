#include "lists.h"
/**
 * get_nodeint_at_index - get node of index
 * @head: pointer th the head
 * @index: index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;


	if (length(head) < index || index < 1)
		return (NULL);
	while (p < index)
	{
		head = head->next;
		p++;
	}
	return (head);

}
