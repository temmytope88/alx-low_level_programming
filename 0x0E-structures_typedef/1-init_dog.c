#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
<<<<<<< HEAD
=======
	d = malloc(sizeof(struct dog));
>>>>>>> 6d4cf76cb7d2472920d47df825168adfed704d50
	d->name = name;
	d->age =age;
	d->owner = owner;
}
