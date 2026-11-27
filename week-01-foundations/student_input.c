#include<stdio.h>

int main (void)

{
    int age;
    float height;
    char grade;

    printf("===== STUDENT INFORMATION =====\n");

    printf("Enter your  age:");
    scanf("%d", & age);

    printf("Enter your height:");
    scanf("%f", & height);

    printf("Enter your Grade:");
    scanf(" %c", &grade);
    
    printf("===== YOUR DETAILS =====\n");

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;




}
