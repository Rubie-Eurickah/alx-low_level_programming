#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
