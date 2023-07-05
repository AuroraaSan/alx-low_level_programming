#include "main.h"

/**
 * check - check prime number
 * @n: number
 * @i: integer
 * Return: result
*/

int check(int n, int i)
{
	if (n == i && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (check(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (check(n, 2));
}
