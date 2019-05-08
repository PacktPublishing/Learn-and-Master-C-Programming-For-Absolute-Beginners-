//How to use auto, static, register and volatile keywords in C
#include <stdio.h>

/*
auto: 
auto is a modifier that defines the storage class of a variable.
However, since the default for local variables is auto,
you don't normally need to manually specify it.
*/

/* 
  register:
  register is used to define variables that should be stored in a register instead of RAM. 
  this variable cannot be used with '&' operato because it does not have a memory location
  Register should only be used for variables that require quick access!
*/

/*
static:
    'static' can also be defined within a function. If this is done, the variable is initalised 
     at compilation time and retains its value between calls
     static is the default storage class for global variables.
*/

void PrintNumber()
{
    static int n = 0; //gets executed once on first call

    n++;
    printf("Number = %d\n", n);
}

void main()
{
    auto int n = 100;
    
    register int i; // a recommendation ( suggestion ) from us (developers) to the compiler
    for (i = 0; i < 100; ++i)
    {
        printf("i=%d\n", i);
    }
    printf("N=%d\n", n);

    PrintNumber();  //allocate and init (n)
    PrintNumber();  //
    PrintNumber();
    PrintNumber();

}
