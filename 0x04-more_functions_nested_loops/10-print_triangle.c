#include "main.h"

/**
 * print_triangle - function to print triangle then new line
 * Description: print diagonal to form triangle
 * @size: size of the printed triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; ++row)
		{
			for (spaces = size = row; spaces >= 0; ++spaces)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes <= row; ++hashes)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
