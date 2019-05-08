
// Conditional compilation in C/C++

#include <stdio.h>
#define HELLO(x)    "Hello, Mr " #x

void main()
{
    int total = 0;
    for (int i = 0; i < 100; ++i)
    {
#if 0
        printf("%d \n", i);
#else
        printf("%d \n", i+1);
#endif
        total += i;
    }

    printf("Total = %d\n", total);

    printf("%s\n", HELLO(Mohammad));
}