// IsPalindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Returns TRUE if string is palindrome
//Returns FALSE otherwise
bool IsPalindrome(const char * pString)
{
    if (NULL == pString)
        return false;
    if (!*pString)
        return false;

    const char * pStart = pString;
    const char * pEnd = pString;

    //advance to end of string
    while (*pEnd)
        pEnd++;
    --pEnd; //Move to last character

    while (pStart < pEnd)
    {
        if (towupper(*pStart) != towupper(*pEnd))
            return false; //Not palindrome

        --pEnd;
        ++pStart;
    }

    return true; //this is a palindrome
}

int main()
{
    const char * pTests[] = {
            "RaCECAR",
            "DAD",
            "MOM",
            "BOB",
            "LEVEL",
            "KAYAK",
            "TEST",
            "DATA",
            "GOOD"
    };
    
    for (int i = 0; i < sizeof(pTests) / sizeof(pTests[0]); ++i)
    {
        printf("%d - IsPalindrome('%s') returned %s\n",
            i,
            pTests[i],
            IsPalindrome(pTests[i]) ? " IS A PALINDROME!" : "IS NOT A PALINDROME!");
    }
    return 0;
}

