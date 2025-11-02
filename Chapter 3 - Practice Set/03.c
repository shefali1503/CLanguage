//to calculate income tax

#include <stdio.h>

int main() {
    int income;
    printf("Enter the income:");
    scanf("%d",&income);
    float tax = 0;
    //when income is below 2.5 lakhs
    if(income <= 250000){
        tax=0;
    }
    //when income is between 2.5 lakhs and 5 lakhs
    else if(income > 250000 && income <= 500000){
        tax= 0.05 * (income - 250000);
    }
    //when the income is btw 5 laks to 10lakhs
    else if(income >500000 && income <=1000000){
        tax= 0.05 *(500000-250000) + 0.2*(income -500000);
    }
    //above 10lakhs
    else{
        tax =0.05 *(500000-250000) + 0.2*(1000000 -500000)+ 0.3*(income -1000000);
    }

    printf("The income tax on income %d is %.2f",income , tax);

     
    return 0;
}