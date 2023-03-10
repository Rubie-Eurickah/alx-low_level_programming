#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The value to be checked
 * Return: 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
