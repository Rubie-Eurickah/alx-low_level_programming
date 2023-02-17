#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all alphabets in lowercase except q and e
 * Return: Always (Success)
 */

int main(void)
{
	char low, e, q;

	q = 'q';
	e = 'e';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != q && low != e)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
