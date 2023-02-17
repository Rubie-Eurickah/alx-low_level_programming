#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of two digits.
 * Return: Always (Success)
 */

int main(void)
{
	int e, f;

	for (e = '0'; e < '9'; e++)
	{
	for (f = e + 1; f <= '9'; f++)
	{
	if (e != f)
	{
	putchar(e);
	putchar(f);
	if (e == '8' && f == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
