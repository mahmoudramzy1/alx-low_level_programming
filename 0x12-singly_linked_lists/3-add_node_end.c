#include "lists.h"
/**
 * add_node_end - adds new node
 * @head: pointer to head
 * @str: pointer to element
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->len = _strlen(new_node->str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
