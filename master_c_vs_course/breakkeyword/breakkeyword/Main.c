
// Using break keyword
// break is used with the following statements in C/C++:
// 1. switch statement
// 2. Loops: for, do...while and while loops

#include <stdio.h>

void main()
{
    for (int i = 0; i < 10; ++i)
    {
        printf("Inside i loop with i=%d\n", i);

        if (i > 5)
        {
            printf("**** breaking out of (i) loop\n");
            break;  //breaks out of the i loop
        }

        for (int j = 0; j < 10; ++j)
        {
            switch (j)
            {
            case 0:
                printf("J is now at its first iteration\n");
                break;  //break out of the switch statement block
            case 1:
                printf("This is the second J loop!\n");
                break;
            case 3:
            default:
                printf("J counter is now %d\n", j);
                printf("This is the default case :)\n");            
            }

            if (j > 4)
            {
                printf("++++ breaking out of (j) loop\n");
                break;  //breaks out of the j loop
            }
        }
    }
}
