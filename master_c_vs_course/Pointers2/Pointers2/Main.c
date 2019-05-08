
//Why do we need pointers?

#include <stdio.h>

void swap(int n1, int n2)
{
    printf("swap: address of a = %p\n", &n1);
    printf("swap: address of b = %p\n", &n2);

    //swap two variables
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void main()
{
    int a = 10;
    int b = 20;
    
    printf("main: address of a = %p\n", &a);
    printf("main: address of b = %p\n", &b);

    swap(a, b);
    printf("a=%d and b=%d\n", a, b);
}
