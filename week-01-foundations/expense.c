#include<stdio.h>

int main(void) {

    int items = 5;
    float price = 50.60;
    char currency = '$';
    double total_expense = items * price;

    printf("Items: %d\n", items);
    printf("Price: %.2f\n", price);
    printf("Total Expense: %.2lf %c\n", total_expense, currency);

    return 0;
}