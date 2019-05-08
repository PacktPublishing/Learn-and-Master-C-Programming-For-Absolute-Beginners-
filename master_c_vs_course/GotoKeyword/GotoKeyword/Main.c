// Using goto keyword
#include <stdio.h>

void main()
{
    int a = 10;
    int b = 5;
    
    if (b == 0)
        goto Exit;

    printf("%d / %d = %d\n", a, b, a / b);
    return;

Exit:
    printf("Cannot divide by Zero!!\n");

}