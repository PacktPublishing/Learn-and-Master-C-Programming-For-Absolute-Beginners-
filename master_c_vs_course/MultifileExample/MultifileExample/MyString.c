
#include <string.h>     //string functions

//MyString.c contains all string related functions
void RemoveSpaces(char * p)
{
    if (NULL == p)
        return;

    int n = 0;

    for (unsigned int i = 0; i < strlen(p); ++i)
        if (p[i] != ' ')
            p[n++] = p[i];

    p[n] = '\0';
}

int WordCount(const char * pString, const char * pWord)
{
    int count = 0;
    if (NULL == pString || NULL == pWord)
        return 0;
    char * ps = strstr(pString, pWord);
    if (ps != NULL)
    {
        count++;

        while (*ps)
        {
            ps = strstr(ps + 1, pWord);
            if (NULL == ps)
                break;
            ++count;
        }
    }

    return count;
}

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
