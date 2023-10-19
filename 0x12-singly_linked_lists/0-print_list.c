#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t
 * @h: Pointer to the list.
 * @Prlist: This variable will be used to keep track of the number
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t Prlist = 0;
while (h != NULL)
	{
	if (h->str != NULL)
	{
printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
	 printf("[0] (nil)\n");
	}

	h = h->next;
	Prlist++;
	}

return (count);
}

