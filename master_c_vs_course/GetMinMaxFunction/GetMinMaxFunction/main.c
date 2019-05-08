// Using Pointers with Functions
// Function to implement: GetMinMax

#include <stdio.h>

void GetMinMax(int a[], int count, int* pMax, int* pMin)
{
    int max, min;

    max = min = a[0];

    for (int i = 1; i < count; ++i)
    {
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }

    *pMax = max;
    *pMin = min;
}

void main()
{
    int array[] = { 0, 1, -3, -1, 10, 50, 12, 3,4,5,6, 7, 8, -2, -4, -1, 0, 12 };

    int max = 0, min = 0;
    int count = sizeof(array) / sizeof(array[0]);

    GetMinMax(array, count, &max, &min);

    printf("The max in our array is = %d and min = %d\n", max, min);
}