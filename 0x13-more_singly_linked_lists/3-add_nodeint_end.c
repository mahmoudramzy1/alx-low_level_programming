#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of list
 * @head: pointer th the first element
 * @n: value of new node
 * Return: pointer to the new noode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
	}
	else
	{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->n = n;
	}
	new_node->next = NULL;
	return (new_node);
}
