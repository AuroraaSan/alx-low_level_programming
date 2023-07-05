#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: result
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
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
		return (sqaure(n, val + 1));
	else
		return (-1);
}
