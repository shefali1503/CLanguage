#include <stdio.h>

int main() {

     int a=0 ,b=1;

     if(a&&b){//and return true only if both are true
        printf("Both are true\n");
     }
     else{
        printf("Both are not true\n");
     }

     //or logical operator
     if(a||b){
        printf("or operator gives true even if one operand is true\n");
     }
     else{
        printf("or operator returns false if both the operands are false\n");
     }

     //not operator-if true returns false and vice versa
     printf("The not of a is %d and not of b is %d",!a,!b);
    return 0;
}