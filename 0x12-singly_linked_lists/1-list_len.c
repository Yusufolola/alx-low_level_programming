#include "lists.h"
#include <stdio.h>
/**
 * list_len - entry
 * @h pointer to the list
 * Returns: no of elements printed
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t noe = 0;
	temp = h;

	while (temp != NULL)
	{
		noe++;
		temp = temp->next;
	}
	printf("-> %lu elements\n",noe);
	return noe;
}
 
