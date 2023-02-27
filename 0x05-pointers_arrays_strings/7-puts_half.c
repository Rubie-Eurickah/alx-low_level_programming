#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
