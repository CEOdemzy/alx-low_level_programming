#include <string.h>
#include "main.h"


/**
 * _strncat - join two string by character number
 * @dest: to copy to
 * @src: to copy from
 * @n: string number to be joined
 *
 * Return: joint string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
