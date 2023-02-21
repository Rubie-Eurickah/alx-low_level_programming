#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always (Success)
 */

int main(void)
{
	int a;
	long b = 1, c = 2;

	while (a < 50)
	{
	if (a == 0)
	printf("%ld", b);
	else if (i == 1)
	printf(", %ld", c);
	else
	{
	c += b;
	b = c - b;
	printf(", %ld", c);
	}
	++a;
	}
	printf("\n");
	return (0);
}
