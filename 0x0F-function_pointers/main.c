#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of args
 * @argv: the vectors
 * Return : 0
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\N"), exit(99);
	if (!b && (argv[2][0] == '/' || agrc[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", op_func(a, b));
	return (0);
}
