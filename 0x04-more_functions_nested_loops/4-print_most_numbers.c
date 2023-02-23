#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 t0 9 except 2 and 4
 * Return: The numbers printed except 2 and 4
 */

void print_most_numbers(void)
{
	int number, a, b;

	a = 2;

	b = 4;

	for (number = 0; number <= 9; number++)
	{
		if (number != a && number != b)
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
