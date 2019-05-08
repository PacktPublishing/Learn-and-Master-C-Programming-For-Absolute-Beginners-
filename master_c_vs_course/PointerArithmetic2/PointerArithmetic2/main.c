
//Pointer arithmetic (2)

#include <stdio.h>

void main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };
    int* p = a;

    printf("%d\n", a[2]);
    printf("%d\n", *(a + 2));
    printf("%d\n", p[2]);
    printf("%d\n", *(p+2));
}

