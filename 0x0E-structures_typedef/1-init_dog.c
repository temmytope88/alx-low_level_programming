#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 *@d: Dog object
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
