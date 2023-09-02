#include <stdio.h>


/**
 * main - print name followed by new line
 *
 * @argv: command line argument array
 * @argc: command line argument number
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
