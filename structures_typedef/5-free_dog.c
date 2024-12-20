/**
 * free_dog - frees memory of structure dogs
 * @d: variable to initialize
 *
 * Return: On success 1.
 */
#include "dog.h"
#include <stdlib.h>
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
