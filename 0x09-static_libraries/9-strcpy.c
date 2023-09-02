#include "main.h"

/**
 * _strcpy - copy string pointed by src
 * @dest: destination in view
 * @src: source used
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
