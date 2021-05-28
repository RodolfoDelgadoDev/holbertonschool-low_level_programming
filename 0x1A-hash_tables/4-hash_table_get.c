#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key:  is the key looking for
 * Return: the key or the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux)
	{
		if (strcmp(aux->key, (char *)key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
