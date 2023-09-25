#include "lists.h"
/**
 * free_listint - frees the list
 * @head: pointer to the first element in the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}
