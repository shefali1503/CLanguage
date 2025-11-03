#include <stdio.h>

int main() {
    int i=1;
    while(i<10){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
        i++;

    }
    printf("After break i am outside the loop");
    return 0;
}