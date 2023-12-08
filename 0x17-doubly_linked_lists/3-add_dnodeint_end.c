#include "lists.h"
#include <stdlib.h>
/**
 *  add_dnodeint_end - function that adds a new node at the end
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *last;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
temp->prev = NULL;
*head = temp;
return (temp);
}
last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = temp;
temp->prev = last;
return (temp);
}
