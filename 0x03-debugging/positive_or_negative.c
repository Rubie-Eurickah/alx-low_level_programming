#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative - test whether a value is positive, negative or zero
 * @i: The number to be computed
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}
