#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

// Fixed: Changed return type to float and renamed to avoid <stdlib.h> clash
float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", sub(a, b));
    printf("Multiplication = %d\n", mul(a, b));

    // Fixed: Check for zero before calling divide() so garbage isn't printed
    if (b != 0)
    {
        printf("Division = %.2f\n", divide(a, b));
    }
    else
    {
        printf("Division = Not Divisible by zero!\n");
    }

    return 0;
}