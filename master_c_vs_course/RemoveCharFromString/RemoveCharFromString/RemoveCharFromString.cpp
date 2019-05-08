// RemoveCharFromString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Remove Char from String
void RemoveCharFromString(char * p, char c)
{
    if (NULL == p)
        return;
    char * pDest = p;  //Same as p (points to start of string)

    while (*p)
    {
        if (*p != c)
            *pDest++ = *p;
        p++;
    }
    *pDest = '\0';
}

int main()
{
    char str[] = "This is a nice day!";

    printf("Before Remove: %s\n", str);

    RemoveCharFromString(str, 'i');

    printf("After Remove: %s\n", str);
    return 0;
}

