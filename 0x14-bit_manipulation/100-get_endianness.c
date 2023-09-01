#include "main.h"
/**
 * get_endianness - return the endianness of sys
 * Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned long int n = 1;
	
	return (*(char *)&n);
}
