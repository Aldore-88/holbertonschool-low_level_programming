#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * len_count - length count
 * @string: input string
 * Return: return count;
 *
 */
int len_count(const char *string)
{
	int count;

	count = 0;

	while (string[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}
/**
 * add_node_end - add node to end of the list
 * @head: head of the node as a struct
 * @str: string
 * Return: return start of node list head
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	temp = *head;
	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = len_count(str);
		new_node->next = NULL;
		/*because this pointing to null a tmp value is needed*/
		if (*head == NULL)
		{
			*head = new_node;
			return (*head); /*remember that each function is ran individually*/
		}
		while (temp->next != NULL)
		{
			temp = temp->next; /*traverse until NULL (end of list)*/
		}
		temp->next = new_node; /*points to the address of new_node*/
	}
	return (*head);
	free(new_node);
}
