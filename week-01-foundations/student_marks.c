#include<stdio.h>

int main(void)
{
    int mathematics_marks = 85;
    int computer_science_marks = 95;
    int english_marks = 60;
    int electronics_marks = 75;
    int statistics_marks = 80;
    int total_marks = mathematics_marks + computer_science_marks + english_marks + electronics_marks + statistics_marks;



    printf("Mathematics Marks: %d\n", mathematics_marks);
    printf("Computer Science Marks: %d\n", computer_science_marks);
    printf("English Marks: %d\n", english_marks);
    printf("Electronics Marks: %d\n", electronics_marks);
    printf("Statistics Marks: %d\n", statistics_marks);
    printf("Total Marks: %d\n", total_marks);

    return 0;
}