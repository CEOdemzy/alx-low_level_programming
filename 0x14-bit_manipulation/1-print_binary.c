#include "main.h"

/**
 * _pow - function that  calculate (base ^ power)
 * @base: base of exponent used
 * @power: power of exponent used
 *
 * Return: the value of (base ^ power) in view
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int x;

	numb = 1;
	for (x = 1; x <= power; x++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - function that  prints a number in binary base
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int diviso, chec;
	char fla;

	fla = 0;
	diviso = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (diviso != 0)
	{
		chec = n & diviso;
		if (chec == diviso)
		{
			fla = 1;
			_putchar('1');
		}
		else if (fla == 1 || diviso == 1)
		{
			_putchar('0');
		}
		diviso >>= 1;
	}
}
