
//How and when to use static keyword in C

#include <stdio.h>

int count = 10;

void Foo();  //forward declaration

void PrintHello()
{
    printf("Hello from Main\n");
}

void main()
{
    printf("Count = %d\n", count);
    Foo();
    printf("Count = %d\n", count);

    PrintHello();
}

