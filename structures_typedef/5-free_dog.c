#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free all dog memory allocations
 * @d: link to struct parameters
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL) /*dont run when there is a NULL passed*/
	{
		free(d->name); /*why not age?*/
		free(d->owner);
		free(d);
	}
}
