// Using 'continue' keyword in C/C++

#include <stdio.h>

void main()
{
    int i = 0;

    while (i < 100)
    {
        if (i % 2 == 0)
        {
            i++;
            continue;  //skip to next iteration
        }

        if ( i % 3 == 0)
            printf("%d\n", i);

        ++i;
    }
}