//Multi-dimensional arrays in C

#include <stdio.h>

void main()
{
    int a1[4];
    int a2[2][3];
    float a3[4][5][2];
    char a4[1][2][3][4];
    int ar[3][3][3];

    int count = 0;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
            {
                ar[i][j][k] = count++;
                printf("a[%d][%d][%d] = %d\n", i, j, k, ar[i][j][k]);
            }

}