#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 success
 *
 */

int main(void)
{
	int i = '0';

	while (i <= '7') 
	{
		int j = i + 1;
	while (j <= '8')
	{
		int k = j + 1;
	while (k <= '9')
	{
		putchar(i);
		putchar(j);
		putchar(k);
		{
			if (!(i == '7' && j == '8' && k == '9'))
		       {
                    putchar(',');
                    putchar(' ');
                }

                k++;
            }

            j++;
        }

        i++;
    }

    putchar('\n');
	return (0);
}
