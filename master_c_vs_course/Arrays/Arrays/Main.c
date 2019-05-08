// Using Arrays in C

#include <stdio.h>

int SumElements(int ar[], int size)
{
    //Sum all element of an array
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += ar[i];        
    }
    return sum;
}

void PrintArray(int ar[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("[%d] = %d\n", i, ar[i]);
    }
}

int FindMax(int a[], int size)
{
    //Find max element in array
    int max = a[0];
    for (int i = 1; i < size; ++i)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void main()
{
    int a[] = { 200, 40, 10, 50, 30, 1, 2, 3 };
    
    int s1 = sizeof(a);   //20: 5 * 4
    int s2 = sizeof(a[0]); //4
    int s = s1 / s2;

    int size = sizeof(a) / sizeof(a[0]);

    printf("Array size = %d\n", size);
    PrintArray(a, size);
    int sum = SumElements(a, size);
    printf("Sum of all elements in array = %d\n", sum);
    printf("Max element found = %d\n", FindMax(a, size));
}
