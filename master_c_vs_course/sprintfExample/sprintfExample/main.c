//Using sprintf function

//Use  _CRT_SECURE_NO_WARNINGS to disable deprecation of insecure functions

//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h> //We need this to use string functions
#include <windows.h>

void main()
{
    int a = 10;
    int b = 20;

    char mystr[128] = "Hello, this valid";
    
    sprintf_s(mystr, ARRAYSIZE(mystr), "This is an example with two integers %d + %d = %d\n", a, b, a + b);
    printf(mystr);
}