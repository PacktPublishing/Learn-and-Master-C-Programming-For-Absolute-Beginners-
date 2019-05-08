// Using For Loops

#include <stdio.h>

// Print the time table for a given number from 1 to 10
void PrintTimeTable(int number)
{
    printf("Time Table for %d:\n", number);
    printf("------------------------------\n");
    
    for (
        int i=1; 
        i <=10; 
        ++i
        ) 
    {
        printf("%d x %d = %d\n", number, i, number * i);        
    }

    printf("------------------------------\n");
}

void main()
{
    PrintTimeTable(5);
}
