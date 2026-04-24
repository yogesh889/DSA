#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char str[] = "12345";
    int num;

    // Convert string to integer
    num = atoi(str);

    printf("The integer value is: %d\n", num);
    return 0;
}