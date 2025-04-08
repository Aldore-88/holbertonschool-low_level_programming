#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free list head to end
 * @head: head node
 *
 *
 */
void free_list(list_t *head)
{
	list_t *next_tmp;

	while (head != NULL)
	{
		next_tmp = head->next; /*storing the next*/
		free(head->str); /*strdup allocated memory*/
		free(head);
		head = next_tmp;
	}
}
