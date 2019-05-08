
//Using Pointers in C/C++

#include <stdio.h>

void main()
{
    int a = 14;
    int b = 100;
    int* p = &a; 
    
   //Where does (a) live in memory?
    printf("Address for a is %p\n", &a);
    printf("Address inside p is %p\n", p);
    
    //What value does a and p contain?
    printf("a has value = %d\n", a);
    printf("p has value = %d. in hex = %X\n", p, p);

    //What's the value at the address pointed to by (p)?
    printf("p points to an integer with value = %d\n", *p);

    *p = 15;  //change value at memory pointed to by p
    printf("Now p points to an integer with value = %d\n", *p);
    printf("Now a has value = %d\n", a);
    a = 16; //change value using a
    printf("Now p points to an integer with value = %d\n", *p);
    printf("Now a has value = %d\n", a);

    p = &b;  //Now p is pointing to (b)
    printf("Address for b is %p\n", &b);
    printf("Address inside p is %p\n", p);
    printf("b has value = %d\n", b);
    printf("p points to an integer with value = %d\n", *p);

}