#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints combinations
 *
 * Return: 0 (Scuccess)
*/
int main(void)
{
int n;
int sim = 44;
int sp = 32;
for(n = 48;n<= 57;n++)
{
        if (n != 48) // Add condition to avoid printing space before the first number
        {
            putchar(sp);
        }

        putchar(n);
        putchar(sim);
    }

    return 0;
}

