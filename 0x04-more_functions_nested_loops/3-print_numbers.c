#include "main.h"

/**
 * print_numbers - function that pprint numbers from 0-9 and a new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		_putchar(p);
	}
		_putchar('\n');
}
