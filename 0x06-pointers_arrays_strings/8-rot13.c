#include "holberton.h"
/**
  * rot13 - Entry
  *
  * @s: string
  *
  * Return: new string
  */

char *rot13(char *s)
{
	unsigned int i, j;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; arr1[j] != '\0'; ++j)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
				break;
			}
		}
	}
	return (s);
}
