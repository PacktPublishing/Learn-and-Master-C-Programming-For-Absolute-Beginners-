//Functions in C

#include <stdio.h>

//Procedure: returns nothing
void SayHello()
{
    printf("Hello, World!\n");
}

//Function definition for Sum
int Sum(int a, int b)
{
    int result = a + b;
    return result;
}

float Average(int a, int b)
{
    return Sum(a, b) / 2.0f;
}

void main()
{
    SayHello();

    int n1 = 10;
    int n2 = 20;
    int result = Sum(n1, n2);
    
    printf("Sum(%d,%d) = %d\n", n1, n2, result);

    printf("Average(%d, %d) = %f\n", n1, n2, Average(n1, n2));
}

