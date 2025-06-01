#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter value of x: ");
    scanf("%f", &x);

    float result = exp(x);

    printf("Result: %f\n", result);

    return 0;
}
