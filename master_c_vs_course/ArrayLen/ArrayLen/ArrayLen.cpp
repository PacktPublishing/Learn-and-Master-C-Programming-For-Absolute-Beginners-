// ArrayLen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

#define ARRAYLEN(ar) (sizeof(ar) / sizeof(ar[0]))

void Test(int a[], int count)
{
    
}

int main()
{
    int a2[5];
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    for (int i = 0; i < ARRAYSIZE(a); ++i)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    Test(a, ARRAYSIZE(a));
    return 0;
}

