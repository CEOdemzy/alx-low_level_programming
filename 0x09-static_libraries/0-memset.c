#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: manupilate buffer
 * @b: constant buffer
 * @n: bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
