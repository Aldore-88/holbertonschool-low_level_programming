#include "lists.h"
/**
 * sum_dlistint - sum all nodes
 * @head: head node
 * Return: return total of summed nodes
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node_temp;
	int total;

	node_temp = head;
	total = 0;

	while (node_temp != NULL)
	{
		total = total + node_temp->n;
		node_temp = node_temp->next;
	}
	return (total);
}
