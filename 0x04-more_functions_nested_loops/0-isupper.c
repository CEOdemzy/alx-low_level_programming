#include "main.h"
/**
 * _isupper - function to check for uppercase character
 * @c: Variable testing
 * Return: Always o.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

