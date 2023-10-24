#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @n: an integer to be added
 * @head: a pointer to the pointer
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *n_node = malloc(sizeof(listint_t));
if (n_node == NULL)
{
return (NULL);
}
n_node->n = n;
n_node->next = *head;
*head = n_node;
return (n_node);
}
