#include <stdio.h>
#include "main.h"

/**
 * _abs - Prints the absolute value of an integer.
 * @n - The number to be computed
 * @int: Value should be and integer
 * Return: Absolute value of a number or 0
 */

int _abs(int n)
{
	int abs_value;

	if (n < 0)
	{
	abs_value = n * -1;
	return (abs_value);
	}
	return (n);
}
