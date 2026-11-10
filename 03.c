#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 400 == 00 || year % 4 == 0 || year % 100 != 0)
    {
        printf("Leep year");
    }
    else
    {
        printf("Not leep year");
    }
    
    return 0;
}