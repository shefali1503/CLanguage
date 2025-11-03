//using do while loop
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    int i =1;

    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("The sum of first %d numbers are %d",n,sum);
    return 0;
}