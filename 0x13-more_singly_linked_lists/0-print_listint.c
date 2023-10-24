#include "lists.h"
#include "stdio.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 *@h: is a pointer to the current node in the linked list.
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t node_c = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	node_c++;
	h = h->next;
}
return (node_c);
}
