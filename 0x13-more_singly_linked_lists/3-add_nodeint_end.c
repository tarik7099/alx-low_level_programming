#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function Adds a new node at the end
 * of a listint_t list.
 * @head: A pointer
 * @n: The integer value
 *
 * Return: The address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *n_node;
listint_t *tmp = *head;
n_node = malloc(sizeof(listint_t));
if (!n_node)
{
	return (NULL);
}
n_node->n = n;
n_node->next = NULL;
if (*head == NULL)
{
*head = n_node;
return (n_node);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = n_node;
return (n_node);
}
