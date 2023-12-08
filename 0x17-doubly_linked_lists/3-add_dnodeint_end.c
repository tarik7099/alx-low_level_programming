#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at the beginning.
 * @head: double pointer to the head of the list
 * @n: data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
if (*head != NULL)
{
temp->prev = NULL;
*head = temp;
return temp;
}


while ((*head)->next != NULL)
{
    
    (*head)= (*head)->next;
}
(*head)->next = temp;
temp->prev = (*head);

return (temp);
}
