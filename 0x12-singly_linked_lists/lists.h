#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - single linked list
 * @str: stirng
 * @len: length
 * @next: point to end
 *
 * Description: singly linked list node
/* Structure for list_t */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* Other function prototypes... */

/* Prototype for print_list */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
