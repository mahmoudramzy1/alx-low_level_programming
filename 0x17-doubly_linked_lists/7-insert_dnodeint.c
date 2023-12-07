#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts node at the given index
 * @h: pointe to pointer to the header of the list
 * @idx: the index that the node will add in
 * Return: new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *test = *h;

	if (!node || !h)
	{
		if (node)
			free(node);
		return (NULL);
	}
	node->n = n;
	while(test)
	{
		if (i != (idx - 1))
		{
			test = (test)->next;
			i++;
			continue;
		}
		test->next->prev = node;
		node->next = test->next;
		test->next = node;
		node->prev = test;
		return (node);
	}
	return (NULL);
}
