#include <stlib.h>
#include "dog.h"

/**
 *free_dog - frees the memory allocated to struct dog
 *@d: struct dog to be freed
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}