#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 t0 9 except 2 and 4
 * Return: The numbers printed except 2 and 4
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 ||  number == 4)
		{
		continue;
		}
		else
		{
		_putchar(number + '0');
		}
	}
	_putchar('\n');
}
