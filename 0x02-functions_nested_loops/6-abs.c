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
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
