/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable to initialize
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */
#include "dog.h"
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
