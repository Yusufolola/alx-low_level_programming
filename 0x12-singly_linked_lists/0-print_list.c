#include "lists.h"
#include <stdio.h>
/**
 * print_list - print all the elements of a list
 * @h: head of the list
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t non = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s)\n", 0, "nil");
		else
			printf("[%d] (%s)\n", h->len,h->str );
		non++;
		h = h->next;
	
	}
	return non;


	


}
