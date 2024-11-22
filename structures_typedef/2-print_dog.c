/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable to initialize
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */
#include "dog.h"
#include <stdlib.h>
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
