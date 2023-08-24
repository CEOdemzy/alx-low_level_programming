#include "main.h"


/**
 * reverse_array - reverse array of integers
 *
 * @a: reversed array
 * @n: elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index, b;

	n = n - 1;
	b = 0;


	while (b <= n)
	{
		index = a[b];
		a[b++] = a[n];
		a[n--] = index;
	}
}
