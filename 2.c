#include <stdio.h>

int main()
{
        int a, b, add, mul, sub, div, modulus;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        add = a + b;
        printf("1.Addition: %d\n", add);
        sub = a - b;
        printf("2.Subtraction: %d\n", sub);
        mul = a * b;
        printf("3.Multiplication: %d\n", mul);
        div = a / b;
        printf("4.Division: %d\n", div);
        modulus = a % b;
        printf("5.Modulus: %d", modulus);
        return 0;
}