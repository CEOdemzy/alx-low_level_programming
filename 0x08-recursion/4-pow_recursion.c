#include "main.h"


/**
 * _pow_recursion - function of x raised to the power of y
 * @x: value to raise
 * @y: power to be raised
 *
 * Return: result of power raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
