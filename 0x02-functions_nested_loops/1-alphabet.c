#include "main.h"

/**
 * print_alphabets - function to print lower case alphabet
 *
 * This function prints all the lower case alphabet in English language
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
