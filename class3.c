#include <stdio.h>

#define CLASS_SIZE 50 
#define HOSTEL_POP (16 * CLASS_SIZE)
#define HELLO "Welcome to Veritas"
#define EXP 2.7183
#define pi 3.142

int main()
{
    printf("%s\n", HELLO);
    printf("%d\n", CLASS_SIZE);
    printf("%d\n", HOSTEL_POP);
    printf("%f\n", EXP);
    
    printf("\nHello %s. we have %d student in each class and %d in each hostel\n", HELLO, CLASS_SIZE, HOSTEL_POP);
    
    return 0;
}
