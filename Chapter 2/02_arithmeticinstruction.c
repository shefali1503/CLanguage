//these instruction contains arithmentic operators
#include <stdio.h>

int main() {
    int a=5, b=10;
    int c= a+b;//gives sum
    int d = a-b;//gives difference
    int e= a*b;// gives product
    int f = a/b;//gives quotient
    int g =a%b;//gives remainder

    printf("The sum of a and b is %d\n",c);
    printf("The difference  of a and b is %d\n",d);
    printf("The product of a and b is %d\n",e);
    printf("The quotient of a and b is %d\n",f);
    printf("The remainder of a and b is %d\n",g);

    return 0;
}