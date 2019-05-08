
//Using typedef

#include <stdio.h>

// The C programming language provides a keyword called typedef, 
// which you can be used to give a type a new name

typedef unsigned char BYTE;

BYTE i; // 0 to 255

typedef const char * PSCHAR;

typedef const char * PCSTR;
typedef char * PSTR;

struct Rectangle
{
    int x1, y1;
    int x2, y2;
};

typedef struct Rectangle RECT;

void main()
{
    BYTE n;

    n = i;

    PSCHAR p;

    RECT rc1;
    RECT  rc2;
    struct Rectangle rc3;
    struct Rectangle rc4;


}