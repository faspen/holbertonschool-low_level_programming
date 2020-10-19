#ifndef DOGGY_H
#define DOGGY_H

/**
  * struct dog - struct
  * @name: name
  * @age: age
  * @owner: owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
