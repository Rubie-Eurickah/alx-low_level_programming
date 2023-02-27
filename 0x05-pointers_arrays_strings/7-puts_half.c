#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			y = x / 2;
		}
		else
		{
			y = (x + 1) / 2;
		}
	}
	for (; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
