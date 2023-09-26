#include "lists.h"
/**
 * free_listint2 - frees list and sets the head to null
 * @head: pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
