// Recursion in C/C++
#include <stdio.h>

int Factorial(int n)
{
    int fact = 1;

    for (int i = n; i > 1; --i)
        fact *= i;
    
    return fact;
}

int FactorialRecursive(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * FactorialRecursive(n - 1);    
}

void main()
{
    for (int i = 0; i <= 10; ++i)
    {
        printf("Fact(%d) = %d, RecFact=%d\n", i, Factorial(i), FactorialRecursive(i));        
    }
}
