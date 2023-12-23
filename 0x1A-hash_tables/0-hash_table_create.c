#include "hash_tables.h"
/**
 * hash_table_create - function that creates table.
 *
 * If something went wrong, your function should return NULL.
 *
 * @size: size of the hash table/array.
 * Return: pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new = malloc(sizeof(hash_table_t));
if (size == 0)
{
return (NULL);
}
if (new == NULL)
{
return (NULL);
}
new->size = size;
new->array = malloc(sizeof(hash_node_t *) * size);
if (new->array == NULL)
{
return (NULL);
}
return (new);
}
