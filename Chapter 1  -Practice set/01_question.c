//to find the area of a rectange
#include <stdio.h>

int main() {
    int length=4,breadth=5;
    int area= length * breadth;
    printf("The area of a rectangle is %d",area);

    //by input of user
    int l,b,a;
    printf("\nEnter the length and breadth of the rectangle:");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("The area of the rectangle is: %d",a);
    return 0;
}