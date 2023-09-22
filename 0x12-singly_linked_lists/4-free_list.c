#include "lists.h"
/**
 * free_list - frees the list
 * @head: pointer tto head list
 * Reteun: void
 */
void free_list(list_t *head)
{
	list_t *next_node;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
	free(head->str);
	free(head);
}
