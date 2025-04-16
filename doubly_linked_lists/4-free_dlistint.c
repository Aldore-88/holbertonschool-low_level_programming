#include "lists.h"
/**
 * free_dlistint - free node list
 * @head: head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
