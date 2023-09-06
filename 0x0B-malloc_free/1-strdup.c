#include <stdio.h>
#include "holberton.h"


/**
 * _strdup - function to copy string as given parameter
 * @str: the string in view
 * Return: pointer to string on success or null for error
 *?
 char *_strdup(char *str);
 {
 	char *dupli;
	unsigned int x, len;
	
	x = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	dupli = malloc(sizeof(char) * (len + 1));

	if (dupli == NULL)
		return (NULL);

	while ((duplicate[x] = str[x]) != '\0')
		x++;

	return (dupli);
 }
