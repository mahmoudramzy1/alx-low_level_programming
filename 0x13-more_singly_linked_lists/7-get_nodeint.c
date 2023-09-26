#include "lists.h"
/**
 * length - return number of nodes in list
 * @head: pointer to header
 * Return: number of nodes
 */
unsigned int length(listint_t *head)
{
	listint_t *temp = head;
	unsigned int i = 0;


	if (head == NULL)
		return (0);
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
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
		if (head == NULL)
			return (NULL);
		head = head->next;
		p++;
	}
	return (head);

}
