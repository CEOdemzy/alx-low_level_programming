#include "main.h"


/**
 * leet - encode a string to 1337
 *
 * @n: string pointer
 *
 * Return: string n
 */

char *leet(char *n)
{
	int x, y;

	char seven_letter[] = "aAeEoOtTlL";
	char seven_number[] = "4433007711";

	for (x = 0 ; n[x] != '\0' ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			if (seven_letter[y] == n[x])
				n[x] = seven_number[y];
		}
	}
	return (n);
}
