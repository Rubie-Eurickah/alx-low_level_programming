#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;
	int j = 0;

	while (j <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	j++;
	}
}
