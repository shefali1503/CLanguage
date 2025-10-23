//To calculae the area of a circle
#include <stdio.h>
#define pi 3.1412

int main() {
    float radius,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The area of the circle:%f",area);

    return 0;
}