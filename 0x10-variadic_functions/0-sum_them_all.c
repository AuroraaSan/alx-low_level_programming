#include "variadic_functions.h"

/**
 * sum_them_all - sums all args
 * @n: number of args
 * @...: integers to be sum
 * Return: the result
*/

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_list(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
