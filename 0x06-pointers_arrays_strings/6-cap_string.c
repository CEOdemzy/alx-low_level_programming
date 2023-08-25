#include "main.h"


/**
 * cap_string - capitalise each word in a string
 *
 * @n: string pointer
 *
 * Return: string n
 */

char *cap_string(char *n)
{
	int a;

	for (a = 0 ; n[a] != '\0' ; a++)
	{
		if (n[0] >= 97 && n[0] <= 122)
		n[0] = n[0] - 32;
		if (n[a] == ' ' || n[a] == ';' || n[a] == '.' || n[a] == ',' || n[a] == '\t' 
				|| n[a] == '!' || n[a] == '\n'|| n[a] == '?' || n[a] == '{' 
				|| n[a] == '}' || n[a] == '(' || n[a] == ')' 
				|| n[a] == '"')
		if (n[a + 1] >= 97 && n[a + 1] <= 122)
		n[a + 1] = n[a + 1] - 32;
		}
		return (n);
}
