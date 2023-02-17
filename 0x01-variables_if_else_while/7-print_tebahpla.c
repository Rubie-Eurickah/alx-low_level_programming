#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints lowercase alphabets in reverse
 * Return: Always (Success)
 */

int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	putchar(y);
	putchar('\n');
	return (0);
}
