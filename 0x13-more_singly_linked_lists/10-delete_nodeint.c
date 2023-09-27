#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to the first element
 * @index: index of node that will delete
 * Return: 1 if succeeded -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node_before, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	node_before = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (node_before->next == NULL)
			return (-1);
		node_before = node_before->next;
	}
	temp = node_before->next;
	node_before->next = temp->next;
	free(temp);
	return (1);


}
