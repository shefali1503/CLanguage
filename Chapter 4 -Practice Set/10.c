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

    //n greater than 1
    else{
        for(int i=2;i*i<n;i++){

            if(n%i==0){
                flag=1;
                break;
            } 
        }
    }

    flag==1?printf("Number is not prime"):printf("Number is prime");

    return 0;
}