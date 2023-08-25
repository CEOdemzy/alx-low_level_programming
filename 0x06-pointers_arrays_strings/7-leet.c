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
	int a, b;

	char leet_letters[] = "aAeEoOtT1L";
	char leet_numbers[] = "4433007711";

	for (a = 0 ; n[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (leet_letters[b] == n[a])
				n[a] = leet_numbers[b];
		}
	}
	return (n);
}
