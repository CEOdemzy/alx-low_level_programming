#include "main.h"
/**
 * _strchr - finds character
 * @s:string examined
 * @c: interest character
 *
 * Return: 's' or NULL
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (c == s[x])
			return ((s + x));
	}
	return ('\0');
}
