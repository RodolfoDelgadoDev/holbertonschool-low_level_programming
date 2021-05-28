#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int b = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (b == 1)
				printf(", ");
			b = 1;
			printf("\'%s\': ", (ht->array[i])->key);
			printf("\'%s\'", (ht->array[i])->value);
			ht->array[i] = (ht->array[i])->next;
		}
	}
	printf("}\n");
}
