#include <stdio.h>


/**
 * main - prints number of argument passed into it
 *
 * @argc: arggument counts
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
