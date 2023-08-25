#include "main.h"


/**
 * rot13 - a function assigned to encodes a string by rot13
 *
 * @s: string which is to be  encoded
 *
 * Return: char
 */
char *rot13(char *s)
{
	int c, d;
	char f[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char g[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; f[d] != '\0'; d++)
		{
			if (s[c] == f[d])
			{
				s[c] = g[d];
				break;
			}
		}
	}

	return (s);
}
