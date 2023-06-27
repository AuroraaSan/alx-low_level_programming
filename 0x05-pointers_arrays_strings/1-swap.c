#include "main.h"

/**
 * swap_int - swaps two values
 * @a:first
 * @b:second
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
