#include <stdio.h>

/**
 * main -Prints alpahbets in lowercase then uppercase
 * Return: Always (Success)
 */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	putchar(d);

	for (d = 'A'; d <= 'Z'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
