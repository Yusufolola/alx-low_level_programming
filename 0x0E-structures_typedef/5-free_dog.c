#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
   * free_dog - frees the memory allocated for a dog.
    * @d: Pointer to the dog structure to be freed.
     * Return: None
      */
void free_dog(dog_t *d)
{
		if (d == NULL)
				{
							return;
								}
			free(d->name);
				free(d->owner);
					free(d);
}
