#include "lists.h"

/**
 * dlistint_len - unction that returns the number of elements in a linked
 *  @h: Pointer to the head of the list
 * Return: Number of element in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *temp;
temp = h;
while (temp != 0)
{
count++;
temp = temp->next;
}
return (count);
}
