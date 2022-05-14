#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* for initialiation of the struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
