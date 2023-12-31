#include "main.h"

/**
 * square - function to calculate sqrt
 * @n: number
 * @val: value
 * Return: value to main function
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: result
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
