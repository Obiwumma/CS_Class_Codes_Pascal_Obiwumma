#include <stdio.h>

int main() {
    // Reading Integers
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); 
    printf("You entered: %d and %d \n", a, b);
    
    // Reading Strings with scanf
    char firstName[20], lastName[20];
    printf("Enter your first and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("Hello %s %s\n", firstName, lastName);
    
    // Reading Strings with fgets (Safer)
    // Clear the input buffer first if running sequentially
    int c; while ((c = getchar()) != '\n' && c != EOF); 
    
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 
    printf("Hello, %s", name);
    
    return 0;
}
