#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: saved memory
 * @src: source memory 
 * @n: bytes to copy
 *
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
