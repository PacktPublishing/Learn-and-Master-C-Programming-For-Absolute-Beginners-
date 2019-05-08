
//Working with strings in C/C++
//strlen function

#include <stdio.h>
#include <string.h>


int MyStrlen(const char * p)
{
    int count = 0;

    while (*p)
    {
        p++;
        count++;
    }
    return count;
}

void main()
{
    char a[] = "This is a string in C/C++";

    printf("%s\n", a);
    printf("Length = %d\n", strlen(a));
    printf("Size = %d\n", sizeof(a) / sizeof(a[0]));
    printf("MyStrlen returned %d\n", MyStrlen(a));    
    
}
