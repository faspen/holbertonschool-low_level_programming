#include <stdlib.h>
/**
  * print_name - print a name
  *
  * @name: given name
  * @f: pointer
  *
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
