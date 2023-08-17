#include "main.h"


/**
 * print_most_numbers - function to print 0-9 without 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int c;
	
	for (c = 48; c <= 57; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
