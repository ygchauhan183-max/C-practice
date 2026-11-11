#include <stdio.h>

int main()
{
    int choice;
    float num, num2, result;
    printf("Enter two number: ");
    scanf("%f %f", &num, &num2);
    printf("\n~~ ~~ ~~ ~~MENU~~ ~~ ~~ ~~\n");
    printf("1. Addition:\n");
    printf("2. Subtraction:\n");
    printf("3. Multiplication:\n");
    printf("4. Division:\n");
    printf("Enetr your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = num + num2;
        printf("Addtion = %.2f", result);
        break;
    case 2:
        result = num - num2;
        printf("Subtraction = %.2f", result);
        break;
    case 3:
        result = num * num2;
        printf("Multiplication = %.2f", result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num / num2;
            printf("Division = %.2f", result);
        }
        else
        {
            printf("Division not possible");
        }
        break;
    default:
        printf("Invalid choice !");
    }
    return 0;
}