#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character to be checked
 * Return: Always (Success)
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
