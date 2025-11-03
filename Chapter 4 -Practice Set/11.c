//check whether prime or not

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int flag=0;

    //case n=1
    if (n == 0 || n == 1)
    {
        flag = 1;
    }

    //n greater than 1 or 2
    else
    {
        int i =2;
        while(i*i<n){
            if(n%i==0 || n!=2){
                flag=1;
                break;
            }
            i++;
        } 
    }

    flag==1?printf("Number is not prime"):printf("Number is prime");

    return 0;
}