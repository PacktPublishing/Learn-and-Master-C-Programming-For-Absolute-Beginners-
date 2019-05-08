// CountWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int CountWords(const char * pStr)
{
    int numWords = 0;
    int len = 0;

    if (pStr == NULL)
        return 0;

    while (*pStr)
    {
        if (*pStr == ' ')
            len = 0;
        else if (++len == 1)
            numWords++;

        pStr++;
    }

    return numWords;
}

int main()
{
    const char str[] = "       Let us    count the number of words in this      string    ";

    int words = CountWords(str);

    printf("Number of Words = %d\n", words);
    return 0;
}

