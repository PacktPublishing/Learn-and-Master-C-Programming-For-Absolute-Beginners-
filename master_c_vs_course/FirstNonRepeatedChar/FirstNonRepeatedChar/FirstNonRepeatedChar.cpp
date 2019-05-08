// FirstNonRepeatedChar.cpp 
// Description: Find the first non-repeated character in a string
//              We will implement a solution that takes O(N) time

#include "stdafx.h"

int main()
{
    char str[] = "Hello and Hi from Programmer Tube to everyone who likes to program and enjoys coding and learning!";

    int count[256] = { 0 };

    char* p = str;
    //Empty all character counts into our bucket array
    while (*p)
        ++count[*p++];
    
    p = str;

    while (*p)
    {
        if (1 == count[*p])
        {
            printf("The first non-repeated character is %c\n", *p);
            break;
        }
        p++;
    }

    return 0;
}

