
//using extern keyword
#include <stdio.h>

int count = 10;

//Forward declaration
void Foo();

void main()
{
    printf("Count = %d\n", count);
    Foo();
    printf("Count = %d\n", count);
}