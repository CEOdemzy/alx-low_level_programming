#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, then new line.
 * @separator: string printed between numbers.
 * @n: number of integers passed to function.
 * @...: variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int inde;

		va_start(num, n);


		for (inde = 0; inde < n; inde++)
		{
			printf("%d", va_arg(num, int));


			if (inde != (n - 1) && separator != NULL)
				printf("%s", separator);
		}

		printf("\n");

		va_end(num);
}

