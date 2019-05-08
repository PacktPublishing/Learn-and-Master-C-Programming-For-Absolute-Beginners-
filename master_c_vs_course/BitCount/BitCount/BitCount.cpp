// BitCount.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <Windows.h>
#include <string.h>

void IntToBin(int n, char * p)
{
    char * pStr = p;
    if (NULL == p)
        return;    
    do
    {
        if (0 == n % 2)
            *p = '0';
        else
            *p = '1';
        p++;
        n = n / 2;
    } while (n > 0);
    *p = '\0';
    _strrev(pStr);
}

void IntToBin(int n, char * p, int size)
{
    if (NULL == p)
        return;
    if (size < 33)
        return;

    int bits[] = { 4, 8, 16, 24, 32 };
    int bitCount = 0;
    for (int i = 0; i < ARRAYSIZE(bits); ++i)
    {
        if (n < (1 << bits[i]))
        {
            bitCount = bits[i];
            break;
        }
    }

    //Set all zeros
    memset(p, '0', bitCount);
    p[bitCount] = '\0';
    char * pStr = p + bitCount-1;
    
    while (n>0)
    {
        if (0 == n % 2)
            *pStr = '0';
        else
            *pStr = '1';
        --pStr;
        n = n / 2;
    } 
}


int BitCount(int n)
{
    int count = 0;
    for (int i = 0; i < 32; ++i)
    {
        if (n & 1)
            ++count;
        n >>= 1;
    }
    return count;
}

int BitCount2(int n)
{
    int count = 0;
    while (n > 0)
    {
        ++count;
        n &= n-1;
    }
    return count;
}


int main()
{
    char b[100];
    IntToBin(255, b, ARRAYSIZE(b));

    for (int i = 0; i <= 255; ++i)
    {
        //printf("BitCount(%d) = %d %b\n", i, BitCount(i), i);
        IntToBin(i, b);
        printf("%i = %s\n", i, b);
        IntToBin(i, b, ARRAYSIZE(b));
        printf("%i = %s\n", i, b);
    }
    return 0;
}

