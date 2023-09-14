#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, then a new line.
 * @separator: string printed between strings.
 * @n: strings passed to the function
 * @...: variable number of strings to be printed.
 * Description: If separator is NULL, not printed.
 *              If one of the strings if NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int inde;

	va_start(string, n);

	for (inde = 0; inde < n; inde++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (inde != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
