#include "main.h"


/**
 * _strcat - join two strings
 * @dest: to copy to
 * @src: to copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *save_dest = dest;

	while (*dest)
		dest++;

	while ((*dest++ = *src++))
		;

	return (save_dest);
}
