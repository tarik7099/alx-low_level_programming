#include "lists.h"
/**
 * sum_listint - Returns the sum of all the
 * data (n) in a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * Return: The sum of all the data
 */

int sum_listint(listint_t *head)
{
int sum_list = 0;

while (head != NULL)
{
sum_list = sum_list + head->n;
head = head->next;
}
return (sum_list);
}
