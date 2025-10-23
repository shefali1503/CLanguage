//To calcualte simple intrest

#include <stdio.h>

int main() {
    int noofyears;
    float rate,p,si;
    printf("Enter the principal amount,rate of intrest,no of years:");
    scanf("%f%f%d",&p,&rate,&noofyears);
    si=rate*p*noofyears/100;

    printf("The simple intrest is %f",si);
    return 0;
}