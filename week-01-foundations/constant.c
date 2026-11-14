#include<stdio.h>

int main(void) {

    const float PI = 3.14f;
    const int RADIUS = 5;

    float area = PI * RADIUS * RADIUS;

    printf("Circle Calculation:\n");
    printf("-----------------\n");
  

    printf("PI: %.2f\n", PI);
    printf("Radius: %d\n", RADIUS);
    printf("Area: %.2f\n", area);

    return 0;
}