#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - list length - what is meant to be the
 *		difference between this and the previous task?
 * @h: head node
 * Return: count
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		h = h->next; /*progresses to next node*/
		count = count + 1;
	}
	return (count);
}
