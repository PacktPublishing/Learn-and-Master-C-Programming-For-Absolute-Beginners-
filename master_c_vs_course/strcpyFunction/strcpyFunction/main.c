
// Using strings in C/C++
// strcpy and strcat functions

//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> //We need this to use string functions
#include <Windows.h>

void main()
{
    char str[200];
    
    //Dest >= strlen(src) + 1 (null)
    strcpy_s(str, ARRAYSIZE(str), "This is a string with 1");
    printf("str=%s\n", str);
    strcat_s(str, ARRAYSIZE(str), "00. this is done with strcat");
    printf("str=%s\n", str);
    strcpy_s(str, ARRAYSIZE(str), "Strcpy again!");
    printf("str=%s\n", str);
}