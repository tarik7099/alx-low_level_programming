#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the list.
 * @str: String to be included in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
list_t *l = *head;
n = malloc(sizeof(list_t));
if (n == NULL)
	return (NULL);

n->str = strdup(str);
if (n->str == NULL)
{
free(n);
return (NULL);
}
n->len = strlen(str);
n->next = NULL;

if (*head == NULL)
{
*head = n;
return (n);
}

while (l->next != NULL)
l = l->next;

l->next = n;

return (n);
}
