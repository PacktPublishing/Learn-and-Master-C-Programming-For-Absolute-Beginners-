// cppReverseDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <MyLibrary.h>

int main()
{
    char str[] = "Hello from C to C++";

    printf("Reverse = %s\n", ReverseString(str));
    return 0;
}

