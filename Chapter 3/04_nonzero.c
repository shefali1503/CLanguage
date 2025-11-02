#include <stdio.h>

int main() {

     if(1){
        printf("This if will be executes\n");//non zero values
     }
     if(2589){
        printf("This if will be also executed\n");//non zero values
     }
     if(2.556){
        printf("Third if will be also executed");//non zero values
     }
     if('b'){
        printf("Fourth if willl be executed");//non zero values
     }
     if(0){
        printf("this is 0 - not be executed");//zero value
     }

    return 0;
}