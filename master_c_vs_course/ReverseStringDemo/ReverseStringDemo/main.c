
// ReverseStringDemo: How to use a static LIB in our project

#include <stdio.h>
#include "Mylibrary.h"

void main()
{
    char str[] = "This is a test";

    printf("Reverse = %s\n", ReverseString(str));
}
