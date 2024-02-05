#include<stdio.h>

int main()
{
    double celcius,farenheit;

    printf("Enter the temperature in celcius: \n");
    scanf("%lf",&celcius);

    farenheit= 1.8*celcius+32;

    printf("Temperature in farenheit is: %lf\n",farenheit);

    return 0;
}