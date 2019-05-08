// RemoveDuplicates.cpp 
// How to remove Duplicates from a sorted array in C/C++
//

#include "stdafx.h"
#include <Windows.h>
int RemoveDuplicate(int a[], int size)
{
    int prev = 0;
    for (int i = 0; i < size; ++i)
    {
        if (a[i] != a[prev])
            a[++prev] = a[i];
    }

    int count = prev + 1;
    return count;
}

int main()
{
    int a[] = { 1, 1, 1, 2, 3,3, 4,4,4, 5,5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 8, 9, 10, 10, 10 };

    int count = RemoveDuplicate(a, ARRAYSIZE(a));
    for (int i = 0; i < count; ++i)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}

