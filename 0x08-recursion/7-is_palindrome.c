#include "holberton.h"
/**
  * plhlp - helper function
  * @s2: string
  * @e: length
  * @b: length
  * Return: 0
  */

int plhlp(char *s2, int e, int b)
{
	if (s2[b] == '\0')
		return (1);
	else if (s2[b] == s2[e])
		return (plhlp(s2, --e, ++b));
	else
		return (0);
}
/**
  * _strlen - find length
  * @s3: string
  * @len: length
  * Return: length
  */

int _strlen(char *s3, int len)
{
	if (s3[len] == '\0')
	{
		return (len);
	}
	return (_strlen(s3, ++len));
}
/**
  * is_palindrome - Main
  * @s: string
  * Return: result
  */
int is_palindrome(char *s)
{
	int end = 0, begin = 0;

	end = _strlen(s, end);

	if (s == '\0')
	{
		return (0);
	}
	return (plhlp(s, --end, begin));
}
