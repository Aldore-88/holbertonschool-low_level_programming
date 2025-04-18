#ifndef _LIST_H
#define _LIST_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
