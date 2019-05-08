// Using two dimensional arrays in C

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[3][2]/* = { {0,1},
                    {2,3},
                    {4,5}
                   }*/;

    //Initialize array using random function
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            a[i][j] = rand() % 10; //Use random number generator
        }
    }

    //Display (print) the array
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            //printf("a[%d][%d] = %d ", i, j, a[i][j]);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}