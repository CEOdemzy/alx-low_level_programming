#include "main.h"


/**
 * rev_string - a function that reverses the array
 *
 * @n: the integer parameters
 *
 * Return: 0
 */

void rev_string(char *n)
{
	int c = 0;
	int d = 0;
	char pemp;

	while (*(n + c) != '\0')
	{
		c++;
	}
	c--;

	for (d = 0; d < c; d++, c--)
	{
		pemp = *(n + d);
		*(n + d) = *(n + c);
		*(n + c) = pemp;
	}
}

/**
 * infinite_add - a function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: pointer buffer
 * @size_r: buffer quality
 * Return: pointer for function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, c = 0, d = 0, digits = 0;
	int pal1 = 0, pal2 = 0, pemp_tot = 0;

	while (*(n1 + c) != '\0')
		c++;
	while (*(n2 + d) != '\0')
		d++;
	c--;
	d--;
	if (d >= size_r || c >= size_r)
		return (0);
	while (d >= 0 || c >= 0 || overflow == 1)
	{
		if (c < 0)
			pal1 = 0;
		else
			pal1 = *(n1 + c) - '0';
		if (d < 0)
			pal2 = 0;
		else
			pal2 = *(n2 + d) - '0';
		pemp_tot = pal1 + pal2 + overflow;
		if (pemp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (pemp_tot % 10) + '0';
		digits++;
		d--;
		c--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

