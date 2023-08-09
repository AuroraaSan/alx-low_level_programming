#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: value
*/
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
