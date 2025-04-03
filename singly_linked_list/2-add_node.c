#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
int len_count(const char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}

list_t *add_node(list_t **head, const char *str) 
{	/*inputint the address of head, and a string*/
	/*adding node before the head node*/
	/*string goes to node string, coutning the length of*/
	/*the string into len, node pointing to next node*/
	list_t *new_node;

	if (str != NULL) /*its is calling each time so a loop is not required*/
	{
		new_node = malloc(sizeof(list_t));

		new_node->str = strdup(str);
		new_node->len = len_count(str);
		new_node->next = *head; /* *head is already input as the address*/

		*head = new_node;
	}
	return (new_node);
}
