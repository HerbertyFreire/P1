#include <stdio.h>
#include <stdlib.h>

double area(double r) {
    return (3.14159 * r/100 * r/100);
}

int main() {
    double r, A;
    scanf("%lf", &r);
    A = area(r);
    printf("Area = %.4lf", A);
    return 0;
}
