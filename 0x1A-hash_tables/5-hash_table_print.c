#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *temp;
	char *s;

	if (ht == NULL)
		return;
	printf("{");
	s = "";
	for (j = 0; j < ht->size; j++)
	{
		temp = ht->array[j];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", s, temp->key, temp->value);
			s = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
