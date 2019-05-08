// IsUnique.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctype.h> //_toupper

bool IsUnique(const char * pStr)
{
    if (NULL == pStr)
        return true;

    int count[256] = { 0 };

    while (*pStr)
    {
        if (++count[_toupper(*pStr)] > 1)
            return false;
        pStr++;
    }
    return true; 
}

int main()
{
    char str[] = "Wonderful!";

    printf("'%s': IsUnique = %s\n", str, IsUnique(str) ? "YES" : "NO");

    return 0;
}

