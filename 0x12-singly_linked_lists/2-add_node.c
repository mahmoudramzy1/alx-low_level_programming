#include "lists.h"
/**
 * add_node - adds node at the beginning of list_t
 * @head: pointer to first node
 * @str: pointer to string
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node || !head)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
