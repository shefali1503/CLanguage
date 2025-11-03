//to print first n natural numbers using do while loop

#include <stdio.h>

int main() {
    int n,i=1;
    printf("enter the number:");
    scanf("%d",&n);

    do{
        printf("%d   ",i);
        i++;
    }while(i<=n);
     
    return 0;
}