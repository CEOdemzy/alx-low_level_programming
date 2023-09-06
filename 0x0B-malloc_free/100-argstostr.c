#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* *argstostr - concatenates all the arguments
* @ac: arguments number
* @av: arguments array
*
* Return: Pointer to new string on Success or NULL (Error)
*/
char *argstostr(int ac, char **av)
{
	int x, y, z, len;
	char *stl;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}

	stl = malloc(sizeof(char) * (len + 1));

	if (stl == NULL)
		return (NULL);

	z = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			stl[z] = av[x][y];
			z++;
		}
		stl[z] = '\n';
		z++;
	}
	return (stl);
}

