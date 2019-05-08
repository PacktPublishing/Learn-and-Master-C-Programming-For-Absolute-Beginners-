// PrintBinary.cpp : How to print out binary format integers
// BitCount: count number of bits of an integer
// IsPowerOf2: Detect if a number is a power of 2 or not.
// Powers of 2 are: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024...

#include "stdafx.h"
#include <string.h>

bool IsPowerOfTwo(int n)
{
    if (n < 1)
        return false;

    if (n & n - 1)
        return false;

    return true;
}

int BitCount(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
            ++count;
        n >>= 1;
    }
    return count;
}

void IntToBinary(int n, char * p)
{
    char * pStr = p;

    if (NULL == p)
        return;

    do
    {
        if (n % 2 == 0)
            *p = '0';
        else
            *p = '1';

        p++;

        n = n / 2;

    } while (n > 0);
    *p = '\0';
    _strrev(pStr);
}

int main()
{
    char b[100];

    for (int i = 0; i < 256; ++i)
    {
        IntToBinary(i, b);
        printf("%d = %s, [Bits = %d], IsPowerOf2=%s\n", i, b, BitCount(i), IsPowerOfTwo(i) ? "YES" : "NO");
    }
    return 0;
}

