#include "holberton.h"
/**
 * primehlp - helper
 * @n2: int
 * @m: int
 * Return: result
 */

int primehlp(int n2, int m)
{
	if (n2 == m)
		return (1);
	else if (n2 % m == 0)
		return (0);
	return (primehlp(n2, m + 1));
}

/**
  * is_prime_number - Entry
  * @n: number
  * Return: result
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primehlp(n, 2));
}
