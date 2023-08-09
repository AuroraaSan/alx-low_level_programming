#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number
 * @m: to flip
 * Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorr = n ^ m;
	unsigned int count = 0;

	while (xorr)
	{
		if (xorr & 1ul)
			count++;
		xorr = xorr >> 1;
	}
	return (count);
}
