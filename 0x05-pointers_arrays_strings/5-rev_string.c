#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

