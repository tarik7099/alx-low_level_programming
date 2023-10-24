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
size_t count = 0;
	while (h != NULL)
	{
	count++;
	h = h->next;
	}
return (count);
}
