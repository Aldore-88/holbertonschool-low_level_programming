#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index number
 * @head: head node
 * @index: index at which to get node
 *
 * Return: return node_temp at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_temp;
	unsigned int count;

	node_temp = head;
	count = 0;
	
	if (head == NULL)
	{
		return (NULL);
	}

	while (count < index)
	{
		if (node_temp->next == NULL)
		{
			return (NULL);
		}
		node_temp = node_temp->next;
		count = count + 1;
	}
	return (node_temp);
}
