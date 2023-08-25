#include "main.h"


/**
 * print_number - a function which prints an integers
 * @n: the number that would be printed
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int tar;

	if (n < 0)
	{
		tar = -n;
		_putchar('-');
	}
	else
		tar = n;

	if (tar >= 10)
		print_number(tar / 10);

	_putchar((tar % 10) + '0');
}
