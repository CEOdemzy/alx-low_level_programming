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
	char *keep_dest = dest;

	int lent_dest = strlen(dest);
	int x = 0;

	while (*dest)
		dest++;

	for (; src[x] != '\0' && x < n; x++)
	{
		dest[lent_dest + x] = src[x];
	}
	dest[lent_dest + x] = '\0';
	return (keep_dest);
}
