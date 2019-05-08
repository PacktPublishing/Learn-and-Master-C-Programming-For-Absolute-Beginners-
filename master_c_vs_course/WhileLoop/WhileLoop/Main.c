
//Using While Loops

#include <stdio.h>

//Display numbers from 0 to 15 both decimal and hexdecimal
void DisplayHexNumbers()
{
    const int FALSE = 0;
    const int TRUE = 1;
    int i = 0;

    while (TRUE)
    {
        printf("%d = %x\n", i, i);
        if (++i > 32)
            break;
    }
}

void main()
{
    DisplayHexNumbers();
}