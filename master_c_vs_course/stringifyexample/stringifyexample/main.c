
// How to use # operator in C/C++

#include <stdio.h>

#define SUNDAY 0
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6

#define DAY_NAME(x)  #x

#define PRINT_DAY_NAME(x) printf("Day is %s\n", #x)

#define PRINT_CONCAT(a, b) printf("CONCAT: %s\n", #a ## #b)

void main()
{
    PRINT_DAY_NAME(FRIDAY);
    PRINT_CONCAT(MON, DAY);
}
