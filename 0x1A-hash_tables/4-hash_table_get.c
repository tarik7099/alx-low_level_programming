#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value with a key
 * @ht: hash table to search in
 * @key: key to searched
 *
 * Return: The value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *current_node;
if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
idx = key_index((const unsigned char *)key, ht->size);
current_node = ht->array[idx];
while (current_node != NULL)
{
if (strcmp(current_node->key, key) == 0)
{
return (current_node->value);
}
current_node = current_node->next;
}
return (NULL);
}

