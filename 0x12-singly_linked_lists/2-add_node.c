#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * list_len - entry
 * @h pointer to the list
 * @str char to be added
 * Returns: no of elements printed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = *head;
	size_t nos = 0;

	
	list_t* newnode = malloc(sizeof(list_t));
	if (!newnode)
		return NULL;

	newnode->str = strdup(str);

	for (nos = 0; str[nos]; nos++)
		;
	newnode->next = temp;
	newnode->len = nos;
	*head = newnode;

	return (*head);
}
 
