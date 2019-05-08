
// Working with Strings
// strchr and strstr

#include <stdio.h>
#include <string.h>     //string functions

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

void main()
{
    //strchr: this function is used to search for a character inside a string
    char str1[] = "This is an example string with many words that are using the letter (i) and I want you to help me find them!, I hope you don't mind!";

    printf("Using strchr to find 'i' inside '%s': \n", str1);
    printf("length = %d\n", strlen(str1));

    //Look for all locations of 'i'
    char * pi = strchr(str1, 'i');
    if (pi != NULL)
    {
        int count = 1;
        printf("Found first i at index = %d\n", pi - str1);
        pi++; //move past the 'i' we just found so we can find the next one
        while (*pi)
        {
            pi = strchr(pi, 'i');
            if (pi == NULL)
                break;
            ++count;
            printf("Found another 'i' at index=%d\n", pi - str1);
            pi++;  //we move past 'i' 
        }
        printf("We found a total of %d letters of 'i' inside the string\n", count);
    }
    
    //strstr: find a substring inside a string...
    printf("Word Count = %d\n", WordCount(str1, "you"));
    
}
