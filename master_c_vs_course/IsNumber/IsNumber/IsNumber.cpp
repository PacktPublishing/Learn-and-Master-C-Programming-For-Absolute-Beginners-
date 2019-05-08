// IsNumber.cpp : How to check if a string is a number or not
// Valid numbers are:
// 123
// 123.456
// -854
// +943

#include "stdafx.h"

bool IsNumber(const char * pStr)
{
    if (NULL == pStr || *pStr == '\0')
        return false;

    int dotCount = 0;
    int plusCount = 0;
    int minusCount = 0;
    int digitCount = 0;  // NOTE: This was not in the youtube video isNumber!

    while (*pStr)
    {
        char c = *pStr;
        switch (c)
        {
        case '.':
            if (++dotCount > 1 || !digitCount)
                return false;
            break;
        case '-':
            if (++minusCount > 1 || digitCount)
                return false;
            break;
        case '+':
            if (++plusCount > 1 || digitCount)
                return false;
            break;
        default:
            if (c < '0' || c > '9')  //ASCII: '0'...'9'
                return false;
            ++digitCount;
        }    
        pStr++;
    }
    
    return true; // this is a valid number
}

int main()
{
    char * pTest[] = {
        "123",
        "123.456",
        "-854",
        "12abc",
        "Hello there!",
        "--945",
        "+145",
        "+145+",
        "-945",
        "a123",
        "450.12.13",
        "790+",
        "790-",
        "- 123",
        ".123",
        "0.123"
    };

    for (int i = 0; i < sizeof(pTest) / sizeof(pTest[0]); ++i)
    {
        printf("IsNumber(%s): %s\n", pTest[i], IsNumber(pTest[i]) ? "YES" : "NO");
    }
    return 0;
}

