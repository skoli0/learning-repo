/* Program to find factorial */
#include <stdio.h>

int factorial(int);

int main()
{
    int number, result;

    printf("Enter number to find factorial for: ");
    scanf("%d", &number);

    result = factorial(number);
    printf("The factorial of %d is %d\n", number, result);

    return 0;
}

int factorial(int number)
{
    if (number == 0 || number == 1)
        return 1;
    else
        return (number * factorial(number - 1));
}
