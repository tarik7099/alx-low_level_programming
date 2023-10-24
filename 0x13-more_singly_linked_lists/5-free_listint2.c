#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - taht  function that frees a listint_t list.
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
listint_t *temp1;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
temp1 = *head;
*head = (*head)->next;
free(temp1);
}
*head = NULL;
}
