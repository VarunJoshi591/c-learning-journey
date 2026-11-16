#include<stdio.h>

int main(void) {

  float celsius = 30.f;
  const int Fahrenheit = 32;

  float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    
    printf("Temperature Convertor\n");
    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;

    
}