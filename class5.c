#include <stdio.h>

int main()
{
    // Ternary Operator
    int a, b, c;
    a = 10;
    b = 30;
    c = (a < b) ? (a * b) : (b / a);
    printf("c = %d\n", c);
    
    // Switch Statement
    char grade = 'B';
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Very Good grade\n");
            break;
        case 'F':
            printf("Better try again \n");
            break;
        default:
            printf("Invalid grade\n");
    }
    
    printf("Your grade is %c\n", grade);
    return 0;
}
