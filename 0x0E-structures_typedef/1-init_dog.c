#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a var of type struct dog
 * @d: pointer  to initialize from the struct dog
 * @name: name to commence from
 * @age: age to commence from
 * @owner: owner to commence from
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
