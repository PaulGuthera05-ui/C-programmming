#include <stdio.h>

float convertToCelsius(float fahrenheit);

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius is: %.2f", celsius);

    return 0;
}

float convertToCelsius(float fahrenheit)
{
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}
