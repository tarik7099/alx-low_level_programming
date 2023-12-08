#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function that inserts
 * new node at a given position.
 * @h: double pointer to the beginning of
 * the linked list
 * @idx: is the index of the list where the new node
 * @n: data to enter into new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *next, *new_node;
unsigned int i;

if (h == NULL)
{
return (NULL);
}
if (idx != 0)
{
new_node = *h;
for (i = 0; i < idx - 1 && new_node != NULL; i++)
new_node = new_node->next;
if (new_node == NULL)
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
next = *h;
*h = new;
new->prev = NULL;
}
else
{
new->prev = new_node;
next = new_node->next;
new_node->next = new;
}
new->next = next;
if (new->next != NULL)
new->next->prev = new;
return (new);
}
