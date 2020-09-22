#include "holberton.h"
/**
  * _abs - Entry point
  *
  * @r: integer
  *
  * Return: value
  */

int _abs(int r)
{
	int v;

	if (r < 0)
	{
		v = r * -1;
	}
	return (v);
}
