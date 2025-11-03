#include <stdio.h>

int main() {

    int i = 5;
    printf("The value of i is %d\n", i);//5

    i = i + 5; 
    printf("The value of i is %d\n", i);//10

    printf("The value of i is %d\n", i++);//10
    printf("The value of i is %d\n", i); //11
    

    int j=i--;
    printf("The value of i is %d\n", j); //11


    return 0;
}