#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition
  *
  * @a: int
  * @b: int
  *
  * Return: result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  *
  * @a: int
  * @b: int
  *
  * Return: result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply
  *
  * @a: int
  * @b: int
  *
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division
  *
  * @a: int
  * @b: int
  *
  * Return: result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - modulo
  *
  * @a: int
  * @b: int
  *
  * Return: result
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
