#include "main.h"


/**
 * puts2 - omit one character in a string
 * @str: string inputted
 * Return: print omit character
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
