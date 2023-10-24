#include "lists.h"
/**
 * free_listint -  function Frees a listint_t list.
 * @head: A pointer to the head.
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
