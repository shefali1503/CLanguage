#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of first %d numbers are %d",n,sum);
    return 0;
}