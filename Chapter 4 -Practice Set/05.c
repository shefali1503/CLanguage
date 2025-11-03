#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("The sum of first %d numbers are %d",n,sum);
    return 0;
}