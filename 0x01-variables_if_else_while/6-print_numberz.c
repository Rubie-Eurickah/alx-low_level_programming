#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all numbers of base 10 starting from 0 using putchar function
 * Return: Always (Success)
 */

int main(void)
{
	int e;

	for (e = '0'; e <= '9'; e++)
	putchar(e);
	putchar('\n');
	return (0);
}
