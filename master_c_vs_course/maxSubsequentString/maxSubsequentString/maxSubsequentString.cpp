// maxSubsequentString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main()
{
    const char str[] = "ABCDaabcbc12345678";

    int nFirst  = 0;
    int len = 1;
    int maxLen = 1;
    int maxStart = 0;

    for (int i = 0; i < strlen(str)-1; ++i)
    {
        if (str[i + 1] == str[i] + 1)
        {
            if (1 == len)
                nFirst = i;
            if (++len > maxLen)
            {
                maxLen = len;
                maxStart = nFirst;
            }
        }
        else
            len = 1;
    }

    printf("Found max subsequent of %d:\n", maxLen);
    for (int i = 0; i < maxLen; ++i)
        printf("%c", str[maxStart + i]);
    printf("\n");
    return 0;
}

