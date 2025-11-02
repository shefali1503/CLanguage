//check lowercase or not

#include <stdio.h>

int main() {
    char ch='A';

    printf("The character is %c\n",ch);
    printf("The ASCII value for char %c is %d\n",ch,ch);
     
    if(ch >=97 && ch <=122){
        printf("The character is in lowercase");
    }
    else{
        printf("The character is not in lowercase");
    }
    return 0;
}