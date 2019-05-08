
// Using void pointers in C/C++

#include <stdio.h>

// In C/C++, void pointers have no specific data type so they can be used 
// to point to *any* data type and be treated like int*, float*, char*,...etc.
// The technique involves type casting

enum ValueType { 
        CHAR, 
        INT,
        FLOAT,
        STRING
};

void PrintValue(void * p, enum ValueType type)
{
    switch (type)
    {
    case CHAR:
        {
            char* pc = (char*)p;
            printf("Character: %c\n", *pc);
        }
    break;
    case INT:
        printf("Integer: %d\n", *(int*)p);
        break;
    case FLOAT:
        printf("Float: %f\n", *(float*)p);
        break;
    case STRING:
        printf("String: %s\n", (char*)p);
        break;
    default:
        printf("Unexpected ValueType value used!\n");
        break;
    }
}

void main()
{
    // Some data
    int a = 100;
    char c = 'H';
    float pi = 3.14f;

    //pointers to data
    int* pa = &a;
    char* pc = &c;
    float* ppi = &pi;

    //void pointers: Generic pointers
    void * p;

    p = pa;  //integer * to void pointer
    p = &a;  //p is a void pointer pointing to integer
    p = &c; // so now p points to a char
    p = &pi; //and now it points to a float

    PrintValue(&a, INT);
    PrintValue(&c, CHAR);
    PrintValue(ppi, FLOAT);
    PrintValue("Hi, this is a string used with void pointer", STRING);
}