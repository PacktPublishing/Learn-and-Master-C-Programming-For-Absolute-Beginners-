
//Using char arrays and strings in C

#include <stdio.h>

void main()
{
    char a[5] = { 'H', 'E', 'L', 'L', 'O' };
    char s[6] = "HELLO";

    s[1] = 'I';
    printf("%s\n", s);
}