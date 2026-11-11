#include <stdio.h>

int main() {
    int number, digit;
    int sum =  0, product = 1;
    printf("Enter the number: ");
    scanf("%d", &number);
    while (number!=0)
    {
        digit = number%10;
        sum = sum+digit;
        product = product*digit;
        number = number/10;
    }
    printf("Sum of digit = %d\n", sum);
    printf("Product of digit = %d", product);
    return 0;
}