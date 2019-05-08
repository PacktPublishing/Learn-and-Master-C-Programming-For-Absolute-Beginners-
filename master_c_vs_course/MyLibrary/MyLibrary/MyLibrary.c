#include <string.h>

//Function implemetnation (Source Code)
char * ReverseString(char * pString)
{
    if (NULL == pString)
        return NULL;

    int len = strlen(pString);
    char * pStart = pString;
    char * pEnd = pString + len - 1;

    while (pEnd > pStart)
    {
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }
    return pString;
}
