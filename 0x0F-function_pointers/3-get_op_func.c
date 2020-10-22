#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * get_op_func - retrieves mathmematical expression
  *
  * @s: operator
  *
  * Return: return corresponding operator
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
