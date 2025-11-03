#include <stdio.h>

int main() {
    int sum=0;

    for(int i=1;i<=10;i++){
            sum=sum+8*i;
    }
    printf("The sum of first 10 numbers divisible by 8 are %d",sum);
    return 0;
}