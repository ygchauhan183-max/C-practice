#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0, sum = 0, digit, original, digits = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;

    // 1. Prime Check
    for (int i = 1; i <= n; i++) // Fixed: i <= n so n itself is counted
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    // Fixed: Moved outside the loop
    if (count == 2)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not prime\n");
    }

    // 2. Armstrong Check (works for any number of digits)
    int temp = original;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = original;
    sum = 0; // Ensure sum starts at 0
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + round(pow(digit, digits)); // round() avoids floating-point precision issues
        temp = temp / 10;
    }
    if (sum == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    // 3. Perfect Number Check
    sum = 0; // Fixed: Reset sum to 0 before reusing it
    for (int i = 1; i < original; i++)
    {
        if (original % i == 0)
        {
            sum = sum + i;
        }
    }
    // Fixed: Moved outside the loop
    if (sum == original && original > 0)
    {
        printf("Perfect\n");
    }
    else
    {
        printf("Not Perfect\n");
    }

    return 0;
}