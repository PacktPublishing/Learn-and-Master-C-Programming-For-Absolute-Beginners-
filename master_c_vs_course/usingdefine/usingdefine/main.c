
//Using #define in C/C++

#include <stdio.h>

//CONSTANTS 
#define PROGRAM_VERSION     "1.0.0"

//MACROS
#define SUM(a, b)   ((a)+(b))

#define MULTIPLY(a, b)    ((a)*(b))

#define MAX(x, y)  ((x) > (y) ? (x) : (y))

inline int max(int a, int b)
{
    if (a > b) return a; else return b;
}

void main()
{
        printf("Welcome to my program version %s\n", PROGRAM_VERSION);

        int a = 10, b = 20;
        int r = max(++a, ++b); 
        printf("r=%d\n", r);

        int c = SUM(10, 20);

        printf("Sum = %d\n", c);

        printf("Max of %d and %d is %d\n", 10, 20, max(10, 20));        

        int x = MULTIPLY(10 + 2, 10);  //12*10 = 120
        
        printf("x = %d\n", x);
}