#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creates dog struct
 * @name: dog name
 * @age: dog age
 * @owner: name of owner
 *
 * Description: struct of dog table
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
