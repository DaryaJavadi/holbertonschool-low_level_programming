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
	if (name == NULL)
	{
		free(p);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		return (NULL);
	}

	int i = 0;
	while (name[i] != '\0')
	i++;
	p->name = malloc(i + 1);
	if (p->name == NULL)
	{
	free(p);
	return (NULL);
	}

	for (int j = 0; j <= i; j++)
	p->name[j] = name[j];

	i = 0;
	while (owner[i] != '\0')
	i++;
	p->owner = malloc(i + 1)
	if (p->owner == NULL)
	{
	free(p->name);
		free(p);
		return (NULL);
	}

	for (int j = 0; j <= i; j++)
	p->owner[j] = owner[j];
	p->age = age;

	return (p);
}
