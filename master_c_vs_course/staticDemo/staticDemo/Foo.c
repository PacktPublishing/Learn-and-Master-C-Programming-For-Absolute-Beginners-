
#include <stdio.h>
//count is only visible inside this file
static int count = 123;

void Foo()
{
    printf("Foo count = %d\n", count);
}

static void PrintHello()
{
    printf("Hello from Foo\n");
}

