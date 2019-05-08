
// Pointer Arithmetic
// incrementing and decrementing pointers

#include <stdio.h>

void printIntegers(int * p, int count)
{
    if (NULL == p)
        return;

    for (int i = 0; i < count; ++i)
    {
        printf("[%d]=%d\n", (int)p,  *p);
        p++;  //moving integers ( 4 bytes each time )
    }    
}

void main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7 };
    
    printIntegers(a, 6);

}