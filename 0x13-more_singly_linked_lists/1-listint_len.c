#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * struct listint_t - singly linked list.
 * 
 * @h: a pointer to the head of the list 
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
const listint_t *ptr = h;
size_t count = 0;
	while (ptr != NULL)
	{
	count++;
	ptr = ptr->next;
	}
return (count);
}
