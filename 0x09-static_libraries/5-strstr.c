#include "main.h"
/**
 * _strstr - first occurrence of substring
 * @haystack: string 'needle' is searched
 * @needle: string to find in 'haystack'
 *
 * Return: pointer 'needle' is located
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, flag_index = -1;

	if (*needle == 0)
		return (haystack);
	for (x = 0, y = 0; haystack[y] != '\0' && needle[x] != '\0';)
	{
		if (haystack[y] == needle[x])
		{
			if (x == 0)
				flag_index = y;
			x++;
			y++;
		}
		else
		{
			flag_index = -1;
			x = 0;
			y++;
		}
		if (needle[x + 1] == '\0' && flag_index != -1)
			return ((haystack + flag_index));
	}
	return ('\0');
}
