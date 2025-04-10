#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - List length
 * @h: node
 * Return: count
 *
 *
 */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
