#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int c = 10;
    
    if ((a == 5) && (c > 5)) {
        printf("Line 1 - c is greater than 5\n");
    }
    else if ((a == 5) && (c == 5)) {
        printf("Hi, a is 5 and c is equal to 5\n");
    }
    else {
        printf("Hi, a is 5 and c is greater than 5\n");
    }
    
    return 0;
}
