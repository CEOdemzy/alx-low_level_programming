#include  "main.h"
#include <stdio.h>

/**
 * times_table - a function that print nine times table
 * Description: it prints numbers followed by , and 2 spaces in 9 times table
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 0 ; j < 10 ; j++)
		{
			k = i * j;
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((k % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
