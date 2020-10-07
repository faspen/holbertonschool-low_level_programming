#include "holberton.h"
/**
  * _strlen_recursion - Entry
  * @s: string
  * Return: length
  */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (s[0] == 0)
		return (0);
	if (s[len] != '\0')
	{
		return (len + (_strlen_recursion(s + 1)));
	}
	return (len);
}
