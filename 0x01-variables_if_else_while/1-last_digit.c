#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last degit of a number'
 * Return: Always 
 */

int main(void)
{
        int n;
        int ld;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        ld = n % 10;
        if (ld > 5)
        {
                printf("Last digit of %d is %d and is greater than 5", n, ld)
        }
        else if (ld == 0)
        {
                printf("Last digit of %d is %d and is greater than 0", n, ld)
        }
        else
        {
                printf("Last digit of %d is %d and is greater than 6 and not 0", n, ld)
        }
        return (0);
}

There are a few errors in your code. You are missing semicolons at the end of your printf statements, and you have not included the necessary header files for the srand() and rand() functions.

Here is the corrected code:

arduino
Copy code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'get the last degit of a number'
 * Return: Always
 */

int main(void)
{
    int n;
    int ld;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    ld = n % 10;
       
       	if (ld > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, ld);
        }
        else if (ld == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, ld);
        }
        else
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
        }
        return (0);
}
