
// Working with multiple source files in C/C++

#include <stdio.h>
#include "MyMath.h"
#include "MyString.h"

void main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };

    int total = Sum(a, 6);

    char str[] = "C/C++ is really cool!";

   char * p= ReverseString(str);

}

