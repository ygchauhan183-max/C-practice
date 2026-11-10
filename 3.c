#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d) {
        printf("A is the greatest");
    }
    else if (b >= a && b >= c && b >= d) {
        printf("B is the greatest");
    }
    else if (c >= a && c >= b && c >= d) {
        printf("C is the greatest");
    }
    else {
        printf("D is the greatest");
    }
    return 0;
}
