#include "lists.h"
/**
 * free_dlistint - free node list
 * @head: head node
 *
 */
void free_dlistint(dlistint_t *head)
{
/*temp node to hold next from head, free head, move to next node. prev node of ->next will need to be move to temp??*/
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
