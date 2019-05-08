// PrintNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//
//Q: How to print numbers from 1 to 100 in C++ without using loops, goto or even recursion
// 

class Number
{
    static int count;

public:

    Number()
    {
        printf("%d\n", ++count);
    }
};

int Number::count = 0;

int main()
{
    Number a[100];

    return 0;
}

