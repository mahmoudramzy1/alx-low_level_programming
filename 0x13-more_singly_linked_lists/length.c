#include "lists.h"
/**
 * length - return number of nodes in list
 * @head: pointer to header
 * Return: number of nodes
 */
int length(listint_t *head)
{
	listint_t *temp;
	int i = 1;

	temp = head;
	if (head == NULL)
		return (0);
	while (temp->next != NULL)
	{	
		temp = temp->next;
		i++;
	}
	return (i);
}
