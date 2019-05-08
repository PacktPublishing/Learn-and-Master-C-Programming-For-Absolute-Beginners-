
//Pointers and const keyword in C/C++
#include <stdio.h>

void main()
{
    int a = 100, b = 200;
    int* pa = &a;  // pa is a poniter to integer
    const int* pc = &a;  //pc is a pointer that points to a constant integer
    int const* pc2 = &a; //pc2 is a pointer to an integer that is constant (samme as pc)
    int* const pp = &a;  //pp is a const pointer to an integer
    const int* const ppc = &a; //ppc is  a const pointer pointing to a const integer
    int const* const ppc2 = &a; //same as ppc

    //Using pa we have no limitations:
    //1. pa can change the value of the integer it points to
    *pa = 101; 
    //2. pa can point to a totally different integer
    pa = &b;

    //const int *: a pointer to constant integer
    //1. pc cannot modify or change the value inside the integer it points to
    /*pc = 10; you cannot do this*/

    //2. pc can point to another integer
    pc = &b; //this is OK

    // int * const: a const pointer to an integer
    //1. the integer value can be modified
    *pp = 102;
    //2. The pointer cannot point to anything else in memory
    /*pp = &b;  cannot be assigned any memory address*/

    
    //const int* const : a pointer that is const which also points to const integer
    //you cannot modify the integer or point to another integer
    *ppc = 103;
    ppc = &b;
}
