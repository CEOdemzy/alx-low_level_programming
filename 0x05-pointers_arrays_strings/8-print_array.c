#include "main.h"
#include <stdio.h>


/**
 * print_array - print array of element
 * @a: array to print
 * @n: values to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}


	printf("\n");
}
