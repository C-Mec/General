#include <stdio.h>
int main(void) {
    double radius;
    double pi = 3.14;
    printf("Input the radius=");
    scanf("%lf", &radius);
    printf("Perimeter: %.2f\n", 2 * pi * radius);
    printf("Area: %.2f\n", pi * radius * radius);
    return 0;
}