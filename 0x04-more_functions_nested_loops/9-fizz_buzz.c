#include "main.h"
#include <stdio.h>


/**
 * main - entry point
 *
 * Description: prints out 1-100
 * fizz for 3x and buzz for 5x
 * then fizzbuzz for both
 *
 * Return: always 0
 */

int main(void)
{
		int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 15 == 0)
				printf("FIZZBUZZ");
			else if (i % 3 == 0)
				printf("FIZZ");
			else if (i % 5 == 0)
				printf("BUZZ");
			else
				printf("%i", i);
			if (i < 100)
				printf(" ");
		}
		printf("\n");
		return (0);
}
