#include <stdio.h>

int main()
{
    char name[10];
    int roll_num;
    float marks;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enetr student roll number: ");
    scanf("%d", &roll_num);
    printf("Enetr the student marks: ");
    scanf("%f", &marks);
    printf("\n        ~~~~~~~~STUDENT DETAILS~~~~~~~~     \n");
    printf("1. Name of student %s\n", name);
    printf("2. Student roll number %d\n", roll_num);
    printf("3. Student marks %.2f", marks);
    return 0;
}