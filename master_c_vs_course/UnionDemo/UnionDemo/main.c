

//Declaring and using unions in C/C++

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct MyStruct{

    int a;          //4
    float b;        //4
    char str[100];   //100
};

union MyUnion {

    int a1;
    int b1;
    int c1;
    int a;
    float f;
    char str[100];
};

void main()
{
    struct MyStruct s1;
    union MyUnion u1;

    printf("size of s1 = %d\n", sizeof(s1));
    printf("size of u1 = %d\n", sizeof(u1));

    s1.a = 100;
    s1.b = 200;
    strcpy(s1.str, "This is inside a structure");

    u1.a = 100;
    u1.a1 = 200;
    u1.f = 300;
    strcpy(u1.str, "This is inside a union");

    printf("%d", s1.a);
    printf("%d", u1.a);

}
