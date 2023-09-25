#include "lists.h"
/**
 * add_nodeint - add node to list in beginning
 * @head: pointer to first node
 * @n: value for new node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*int *s;*/
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
