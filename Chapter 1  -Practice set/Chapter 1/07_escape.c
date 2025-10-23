//escape sequences

#include <stdio.h>

int main() {
    printf("Today is \\very \nnice weather");//new line
    printf("\nToday is a\tnice  \" day\'");//escaped tab gives 4 spaces
    // \'-to insert ' charcter | \" -- to insert double quotes
    return 0;
}