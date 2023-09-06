#include "main.h"

/**
 * str_concat - function that concatenate two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: return concatenate pointer of strings
 */

char *str_concat(char *s1, char *s2)
{
	int s1_lent = 0;
	int s2_lent = 0;
	int both_length;
	int x;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0 ; s1[x] != '\0' ; x++)
		s1_lent++;
	for (x = 0 ; s2[x] != '\0' ; x++)
		s2_lent++;


	both_length = s1_lent + s2_lent;

	concat_str = malloc((sizeof(char) * both_length) + 1);

	if (concat_str == NULL)
		return (NULL);
	for (x = 0 ; s1[x] != '\0' ; x++)
		concat_str[x] = s1[x];

	x = 0;

	while (s2[x] != '\0')
	{
		concat_str[s1_lent + x] = s2[x];
		x++;
	}


	return (concat_str);
}
