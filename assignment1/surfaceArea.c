#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float surfaceArea = 4 * pi * radius * radius;

    printf("Surface Area of the Sphere = %.2f\n", surfaceArea);

    return 0;
}
