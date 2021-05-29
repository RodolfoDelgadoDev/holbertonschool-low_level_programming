#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *temp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while(aux)
		{
			temp = aux;
			free(temp->key);
			free(temp->value);
			free(temp);
			aux = aux->next;
		}
	}
	free(ht->array);
	free(ht);
}
