#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - memory release
  *
  * @d: pointer
  */

void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
