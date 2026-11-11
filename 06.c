#include <stdio.h>

int main()
{
    int year, choice;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("1.Year convert to Month\n");
    printf("2.Year convert to Days\n");
    printf("3.Year convert to Hours\n");
    printf("4.Year convert to Minutes\n");
    printf("5.Year convert to Second\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Month = %d\n", year * 12);
        break;
    case 2:
        printf("Days = %d\n", year * 365);
        break;
    case 3:
        printf("Hours = %d\n", year * 365 * 24);
        break;
    case 4:
        printf("Minutes = %d\n", year * 365 * 24 * 60);
        break;
    case 5:
        printf("Second = %d", year * 365 * 24 * 60 * 60);
        break;

    default:
        printf("Invalid choice!");
    }
    return 0;
}