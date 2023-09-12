#include "main.h"


/**
 * _strlen_recursion - Returns string length
 * @s: measured string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int lentst = 0;

	if (*s)
	{
		lentst++;
		lentst += _strlen_recursion(s + 1);
	}

	return (lentst);
}
