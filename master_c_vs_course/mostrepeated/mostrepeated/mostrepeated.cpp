// Hot to find the most repeated character in a string in C/C++

#include "stdafx.h"
#include <stdio.h>

char FindMostRepeated(const char * pStr)
{
    if (NULL == pStr)
        return 0;

    int count[256] = { 0 };
    int max = 0;
    char m = 0;

    while (*pStr)
    {
        if (++count[*pStr] > max && *pStr != ' ')
        {
            max = count[*pStr];
            m = *pStr;
        }
        pStr++;
    }

    return m;
}

int main()
{
    const char str[] = "This is a string with lots of characters in it";

    char result = FindMostRepeated(str);

    printf("Most Repeated is: [%c]\n", result);

    return 0;
}


