
// Multiple inclusion problem in C/C++

#include <stdio.h>

#include "MyHeader.h"
#include "MyHeader.h"
#include "MyHeader.h"
#include "MyHeader.h"


void main()
{
    int total = sum(10, 20);
}