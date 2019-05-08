// Using Pointers with Functions
// Swap function implementation with pointers

#include <stdio.h>

void swap(int* pa, int* pb)
{
    printf("Inside swap: address of a = %p and address of b=%p\n", pa, pb);

    int temp = *pa;
    *pa = *pb;   //integer assignment
    *pb = temp;
}

void main()
{
    int a = 10;
    int b = 20;
    
    printf("Inside main: address of a = %p and address of b=%p\n", &a, &b);

    printf("Before swap: a = %d and b = %d\n", a, b);
    
    swap(&a, &b);

    printf("After swap: a = %d and b = %d\n", a, b);
}