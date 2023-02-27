#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
