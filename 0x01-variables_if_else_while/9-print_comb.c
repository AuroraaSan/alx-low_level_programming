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
        for(n = 48 ; n <= 57 ; n++)
        {
                if( n == 57)
                {
                        sim = 32;
                }
                putchar(n);
                putchar(sim);
                if (n != 57) // Check if it is the last number before printing the space
        {
            putchar(sp);
        }
    }
       
        putchar('\n');
        return(0);
}
