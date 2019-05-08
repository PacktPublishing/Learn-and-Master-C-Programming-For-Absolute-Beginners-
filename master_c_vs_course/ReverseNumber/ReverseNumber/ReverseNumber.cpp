// ReverseNumber.cpp : Defines the entry point for the console application.
// How to reverse a number (integer) in C/C++?

#include "stdafx.h"

int Reverse(int n)
{
    int result = 0;
    int right_digit;

    while (n != 0)
    {
        right_digit = n % 10;   
        n /= 10;
        result = result * 10 + right_digit;
    }
    return result;
}

int main()
{
    for (int i = -123; i <= 123; ++i)
    {
        printf("%d reversed = %d\n", i, Reverse(i));
    }
    return 0;
}


