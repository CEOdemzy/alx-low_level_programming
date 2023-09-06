#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - function to copy string as given parameter
 * @str: the string in view
 * Return: pointer to string on success or null for error
 */
char *_strdup(char *str)
{
	char *dupli;
	int x = 0;
	int str_len = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
	{
		str_len++;
		x++;
	}

	dupli = malloc(sizeof(char) * (str_len + 1));

	if (dupli == NULL)
		return (NULL);

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		dupli[x] = str[x];
	}

	return (dupli);
}
