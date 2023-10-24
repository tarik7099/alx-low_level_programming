#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns the
 * number of elements in a listint_t list.
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
