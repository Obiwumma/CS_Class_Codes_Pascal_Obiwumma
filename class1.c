#include <stdio.h>
#include <string.h>

int main()
{
    char name_1[15], name_2[] = "John", name_3[] = "James";
    
    strcpy(name_2, name_3); 
    printf("Hi %s", name_2);
    
    return 0;
}
