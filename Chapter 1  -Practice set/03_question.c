//volume of cylinder
#include <stdio.h>
#define pi 3.1412


int main() {
    float radius,height,volume;
    printf("Enter the radius of the cylinder:");
    scanf("%f",&radius);
    printf("\nEnter the height of the cylinder:");
    scanf("%f",&height);

    volume=pi * radius*radius * height;
    printf("The volume of cylinder is %f",volume);
    return 0;
}