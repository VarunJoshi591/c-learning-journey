#include<stdio.h>

int main(void)
{
    int a = 20;
    int b = 6;

    int sum = a + b;
    int substraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulus = a % b;

    printf("Sum: %d\n", sum);
    printf("Substraction: %d\n", substraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);
    printf("Modulus: %d\n", modulus);

    return 0;


}