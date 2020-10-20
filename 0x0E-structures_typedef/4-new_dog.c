#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strcpy - copy string
  *
  * @dest: copy to
  * @src: copy from
  *
  * Return: string
  */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v] != '\0'; v++)
	{
		*(dest + v) = *(src + v);
	}
	return (dest);
}

/**
  * new_dog - create struct
  *
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Return: result
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *name2, *owner2;
	dog_t *pooch;

	while (name[i])
		i++;
	while(owner[j])
		j++;
	
	name2 = malloc(i + 1);
	owner2 = malloc(j + 1);

	if (name2 == NULL)
		return (NULL);
	if (owner2 == NULL)
	{
		free(name2);
		return (NULL);
	}

	pooch = malloc(sizeof(dog_t));

	if (pooch == NULL)
	{
		free(name2);
		free(owner2);
		return (NULL);
	}

	_strcpy(name2, name);
	_strcpy(owner2, owner);

	pooch->name = name2;
	pooch->age = age;
	pooch->owner = owner2;

	return (pooch);
}
