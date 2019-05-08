// AllUnique.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctype.h> // _toupper

bool isAllUnique(const char * pStr)
{
    int count[256] = { 0 };

    if (pStr == NULL)
        return true;

    while (*pStr)
    {
        if (++count[_toupper(*pStr)] > 1)
            return false;
        ++pStr;
    }

    return true;
}

int main()
{
    //Nice, Good, Wondeful, Awesome
    char str[] = "Nice!";
      
    printf("'%s': isAllUnique = %s\n", str, isAllUnique(str) ? "YES" : "NO");
    return 0;
}

