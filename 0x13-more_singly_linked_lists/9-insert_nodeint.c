#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to first element
 * @idx: index want to insert node
 * @n: value of node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 1)
	{
		new_node->next = (*head)->next;
		(*head)->next = new_node;

	}
	else
	{
	temp = *head;
	for (i = 1; i < idx; i++)
	{
		if ((temp->next) == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	}
	new_node->n = n;
	return (new_node);

}