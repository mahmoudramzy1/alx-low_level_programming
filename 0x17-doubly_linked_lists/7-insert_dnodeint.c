#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts node at the given index
 * @h: pointe to pointer to the header of the list
 * @idx: the index that the node will add in
 * @n: node data
 * Return: new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node, *test = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i != (idx - 1))
	{
		test = (test)->next;
		if (test == NULL)
			return (NULL);
		i++;
	}
	if (test->next == NULL)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = test;
	node->next = test->next;
	test->next->prev = node;
	test->next = node;
	return (node);
}
