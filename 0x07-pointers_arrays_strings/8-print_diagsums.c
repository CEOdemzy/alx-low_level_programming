#include "main.h"

/**
 * print_diagsums - sum of 2 diagonals
 *
 * @a: array printed
 * @size: size square
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, firstSum, secondSum;

	firstSum = 0;
	secondSum = 0;
	x = 0;

	while (x < size)
	{
		firstSum = firstSum + a[x * size + x];
	x++;
	}

	x = size - 1;

	while (x >= 0)
	{
		secondSum += a[x * size + (size - x - 1)];
	x--;
	}

	printf("%d, %d\n", firstSum, secondSum);
}
