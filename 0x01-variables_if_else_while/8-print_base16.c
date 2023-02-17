#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 * Return: Always (Success)
 */

int main(void)
{
	char low;
	int j;

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);

	for (j = '0'; j <= '9'; j++)
	putchar(j);
	putchar('\n');
	return (0);
}
