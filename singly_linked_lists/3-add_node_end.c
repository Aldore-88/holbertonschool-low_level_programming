#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
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
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str != NULL)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = len_count(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
	}
	return (new_node);
}
