#include "main.h"
/**
 * _strspn - prefix substring
 * @s: examine prefix
 * @accept: intial segement
 *
 * Return: Length of prefix sub string
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, count;

	count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
