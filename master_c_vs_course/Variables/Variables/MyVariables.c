
#include <stdio.h>

int a = 10;  //A is considered a global file
int age = 40;

void main()
{
    //Local variable: life time and visibility bound to the code block it resides in
   //int age = 32; 
    
    printf("My age is %d\n", age);
         

}

