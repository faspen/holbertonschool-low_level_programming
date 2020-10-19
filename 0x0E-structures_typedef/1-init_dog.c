#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - entry
  *
  * @d: var
  * @name: name
  * @age: age
  * @owner: owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
