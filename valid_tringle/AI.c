#include <stdio.h>
#include <stdlib.h>

int can_form_triangle(double a, double b, double c) {
    return a + b > c && a + c > b && b + c > a;
}

int main(void) {
    double a, b, c;
    printf("Enter three side lengths separated by spaces: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Please enter exactly three numeric values.\n");
        return EXIT_FAILURE;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be positive numbers.\n");
    } else if (can_form_triangle(a, b, c)) {
        printf("Yes, the sides can form a triangle.\n");
    } else {
        printf("No, the sides cannot form a triangle.\n");
    }

    return EXIT_SUCCESS;
}
