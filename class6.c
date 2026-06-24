#include <stdio.h>

int main() {
    
    // Standard While Loop
    int x = 10;
    while (x < 20) {
        printf("value of x: %d\n", x);
        x++;
    }
    
    // Do-While Loop (Guaranteed to execute at least once)
    int y = 10;
    do {
        printf("value of y: %d\n", y);
        y++;
    } while (y > 20);
    
    // For Loop (Incrementing)
    for (int a = 10; a < 20; a++) {
        printf("value of a (increment): %d\n", a);
    }
    
    // For Loop (Decrementing)
    for (int b = 20; b > 0; b--) {
        printf("value of b (decrement): %d\n", b);
    }
    
    return 0;
}
