/**
 * new_dog - entry point
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: p
 */
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (name != NULL)
	{
		p->name = malloc(strlen(name) + 1);
		if (p->name == NULL)
		{
			free(p);
			return (NULL);
		}
		strcpy(p->name, name);
	}
	else
	{
		free(p);
		return (NULL);
	}

	if (owner != NULL)
	{
		p->owner = malloc(strlen(owner) + 1);
		if (p->owner == NULL)
		{
		free(p->name);
		free(p);
		return (NULL);
		}
		strcpy(p->owner, owner);
	}
	else
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	p->age = age;

	return (p);
}
