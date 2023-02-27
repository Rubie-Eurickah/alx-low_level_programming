#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int k;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
