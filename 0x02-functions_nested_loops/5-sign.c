#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: input number
 *
 * Return: 1 if positive, 0 if zero, and -1 if negative
*/

int print_sign(int n)
{
	if( n == 0)
	{
		printf('0');
		return (0);
	} else if (n < 0)
	{
		printf('-');
		return (-1);
	} else
	{
		printf('+');
		return(1);
	}
}
