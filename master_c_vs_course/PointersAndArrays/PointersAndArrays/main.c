
// Pointers and Arrays

#include <stdio.h>

void main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };

    for (int i = 0; i < 6; ++i)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // array name is a pointer in C/C++
    // array name points to first element
    // a == &a[0]
    int * p1 = a;
    int * p2 = &a[0];
    printf("p1 = %p and p2 = %p and a =%p\n", p1, p2, a);

    char s[] = "Hello"; //s is string
    char* p = s;
    printf("%c\n", s[0]);
}