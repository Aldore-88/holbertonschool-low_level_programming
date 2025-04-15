#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: head node
 * @n: value inside of node
 * Return: return new_node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/*
 * add node to end of nodes
 * next -> new_node
 * new_node->next to null
 */
	dlistint_t *new_node;
	dlistint_t *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (temp->next != NULL) /*going through the nodes until end*/
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
