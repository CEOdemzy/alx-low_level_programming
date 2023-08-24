#include "main.h"


/**
 * string_toupper - change string lowercase to uppercase
 * @n: string in view pointer
 * Return: string n
 */


char *string_toupper(char *n)
{
	int a;

	for (a = 0 ; n[a] != '\0' ; a++)
	{
		if (n[a] >= 97 && n[a] <= 122)
			n[a] = n[a] - 32;
	}
	return (n);
}
