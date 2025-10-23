//to convert celcius to farenheit

#include <stdio.h>

int main() {
    float tempcel,tempf;
    printf("Enter the temperature in celcius:");
    scanf("%f",&tempcel);

    //conversion
    tempf=(tempcel*(9/5.0))+32;
    printf("%f",tempf);

    return 0;
}