#include <stdio.h>

int main(void)
{
    
    float price1 = 49.99f;
    float price2 = 15.50f;
    float price3 = 120.00f;

    int qty1 = 2;
    int qty2 = 5;
    int qty3 = 1;

    float cost1 = price1 * qty1;
    float cost2 = price2 * qty2;
    float cost3 = price3 * qty3;

    float total = cost1 + cost2 + cost3;

    
    printf("\n=========================================\n");
    printf("            SHOPPING BILL\n");
    printf("=========================================\n");
    printf("%-10s %10s %5s %10s\n", "Product", "Price", "Qty", "Cost");
    printf("-----------------------------------------\n");
    printf("%-10s %10.2f %5d %10.2f\n", "Product 1", price1, qty1, cost1);
    printf("%-10s %10.2f %5d %10.2f\n", "Product 2", price2, qty2, cost2);
    printf("%-10s %10.2f %5d %10.2f\n", "Product 3", price3, qty3, cost3);
    printf("-----------------------------------------\n");
    printf("%-27s %10.2f\n", "TOTAL BILL:", total);
    printf("=========================================\n");

    return 0;
}