#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t
 * @h: Pointer to the list.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t Prlist = 0;
while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}

	h = h->next;
	Prlist++;
	}

return (Prlist);
}

