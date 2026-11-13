#include <stdio.h>

int main(void)
{
    int age = 25;
    float height = 5.6f;
    char grade = 'C';
    double percentage = 90.50;

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);   
    printf("Grade: %c\n", grade);
    printf("Percentage: %.2lf\n", percentage);

    return 0;


}