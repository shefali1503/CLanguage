#include <stdio.h>

int main() {
    float marks1,marks2,marks3,total;
    
    //marks input
    printf("Enter the marks of subject 1:");
    scanf("%f",&marks1);
    printf("Enter the marks of subject 2:");
    scanf("%f",&marks2);
    printf("Enter the marks of subject 3:");
    scanf("%f",&marks3);

    total =(marks1+marks2+marks3)/3;
    printf("%f",total);

    if(total >= 40.0 && marks1 >= 33.00 && marks2 >= 33.00  && marks3>=33.00){
        printf("The student is passed");
    }
    else{
        printf("The student is not passed");
        
    }
    return 0;
}