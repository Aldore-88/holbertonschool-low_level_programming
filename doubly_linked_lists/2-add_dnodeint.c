#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_dnodeint - add doubly node
 * @head: head node
 * @n: value to put in node
 *
 * Return: return new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n )
{
	/*n into node
	 * prev = null
	 * next => head->next
	 * head = new_node*/

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n; /*n value to new node*/
	new_node->prev = NULL;
	new_node->next = *head; /*takes value of head-next??*/

	*head = new_node; /*creates head to be new_node*/

	return (new_node);
}
