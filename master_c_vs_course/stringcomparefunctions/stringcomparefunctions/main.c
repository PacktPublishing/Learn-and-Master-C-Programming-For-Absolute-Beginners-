
// Using strings in C/C++
// How to compare strings
// 1. Case sensitive comaprison using strcmp
// 2. Case insensitive comparison using stricmp

#include <stdio.h>
#include <string.h>  //We need this to use string functions

void main()
{
    char* p1 = "ABCD";
    char* p2 = "ABC";
    char str1[] = "SUM";
    char str2[] = "ABC";

    //strcmp returns:
    // < 0: if p1 < p2
    // 0: if p1 == p2
    // > 0: if p1 > p2
    int result = strcmp(p1, p2);
    printf("Comparing %s to %s result = %d\n", p1, p2, strcmp(p1, p2));

    if (0 == _stricmp(str1, "sum"))
    {
        //Let's do a sum operation...
        printf("Let's do a sum operation\n");
    }
}