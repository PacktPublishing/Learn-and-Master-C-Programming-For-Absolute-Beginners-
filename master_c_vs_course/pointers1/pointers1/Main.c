
//Using address of operator i C/C++

#include <stdio.h>

void main()
{
    int a = 10;
    float f = 3.14f;
    char c = 'A';

    printf("a=%d and its memory address (&a)= %p\n", a, &a);
    printf("f=%f and its memory address (&f)= %p\n", f, &f);
    printf("c=%c and its memory address (&c)= %p\n", c, &c);
}