#include "holberton.h"
/**
  * sqhlp - helper function
  *
  * @n2: int
  * @m: int
  *
  * Return: result
  */

int sqhlp(int n2, int m)
{
	if ((m * m) == n2)
		return (m);
	else if ((m * m) > n2)
		return (-1);
	return (sqhlp(n2, m + 1));
}
/**
  * _sqrt_recursion - gives sqr
  *
  * @n: int
  *
  * Return: exit
  */

int _sqrt_recursion(int n)
{
	return (sqhlp(n, 1));
}
