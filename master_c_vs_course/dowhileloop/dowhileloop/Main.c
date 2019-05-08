//do while loops

#include <stdio.h>

//Return sum of numbers from 1 to n
int Sum(int n)
{
    int sum = 0;
    int i = 100;
    do
    {
        sum += i;
        i++;
        
    } while (i <= n);

    return sum;
}

void main()
{
    printf("Sum(10) = %d\n", Sum(10));
    int s = (10 * 11) / 2;
    printf("Math Sum(10) = %d\n", s);
}