#include<stdio.h>

int main(void) {

  float celsius = 30.f;
  const float FAHRENHEIT_OFFSET = 32.f;

  float fahrenheit = (celsius * 9.0f / 5.0f) + FAHRENHEIT_OFFSET;

    
    printf("Temperature Convertor\n");
    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;

    
}