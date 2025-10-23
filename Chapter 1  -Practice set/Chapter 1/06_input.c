#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);//input for a int variable
    printf("the value of a is :%d \n",a);

    
    float b;//float
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("the value of b is :%f \n",b);

    char ch;//char
    printf("Enter the value of ch:");
    scanf("%c",&ch);
    printf("the value of c is :%c \n",b);
    return 0;
}