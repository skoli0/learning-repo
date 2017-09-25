/* C Program to check whether given two numbers are of opposite sign */

#include <stdio.h>
#include <stdbool.h>

/* Function which utilizes bitwise XOR operator to check to determine the sign */
int oppsign(int x, int y)
{
    return ((x ^ y) < 0);
}

/* Main program */
int main()
{
    if (oppsign(-17, 25)) {
        printf("The numbers have opposite signs.\n");
    }
    else {
        printf("The numbers doesn't have opposite signs.\n");
    }

    return 0;
} /* End of Main */
