#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints combinations
 *
 * Return: 0 (Success)
*/
int main(void)
{
    int n;
    int sim = 44;
    int sp = 32;

    for (n = 48; n <= 57; n++)
    {
        putchar(n);
        putchar(sim);

        if (n != 57) // Add condition to avoid printing comma after the last number
        {
            putchar(sp);
        }
    }

    putchar('\n');

    return 0;
}

