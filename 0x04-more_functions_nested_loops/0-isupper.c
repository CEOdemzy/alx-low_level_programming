#include "main.h"
/**
 * _isupper - program check for uppercase character
 * @c: Variable testing
 * Return: Always o.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

