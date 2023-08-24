#include "main.h"


/**
 * _strncpy - copy string
 *
 * @dest: first string to be copied
 * @src: next string to be copied
 * @n: char to be copied
 *
 * Return: destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
