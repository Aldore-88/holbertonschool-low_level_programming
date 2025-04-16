#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index location
 * @h: head node
 * @idx: index to place node
 * @n: value to place in index location
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *node_ptr;
	dlistint_t *new_node;

	count = 0;
	node_ptr = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	/*nagivate to index to place node*/
	while (node_ptr != NULL && count < idx)
	{
		node_ptr = node_ptr->next;
		count = count + 1;
	}
	if (count == idx)
	{
		new_node->next = node_ptr->next;
		new_node->prev = node_ptr;
		node_ptr->next = new_node;

	}
	return (new_node);
}
