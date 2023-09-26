#include "lists.h"
/**
 * pop_listint - delete first node
 * @head: pointer to head add
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *spare_head;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	spare_head = (*head)->next;
	n = spare_head->n;
	free(*head);
	*head = spare_head;
	return (n);


}
