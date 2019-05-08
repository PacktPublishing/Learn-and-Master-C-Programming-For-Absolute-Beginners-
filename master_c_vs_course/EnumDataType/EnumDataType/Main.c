
//Declaring and Using Enum Data Type in C/C++
// Enum: Enumerated data types. 
// This is used to define named constants .i.e. give names to integer constants

//How to define enums?
//enum <name> { enumeration_list } [variable_name];

#include <stdio.h>

enum Days {
        Sunday ,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
} ;

enum Months {
    Januray = 1,
    February,
    March,
    April,
    //...
};

void main()
{
    enum Days MyDay;

    MyDay = Sunday;

    printf("Sunday = %d\n", MyDay);

    MyDay = Tuesday;

    printf("Tuesday= %d\n", MyDay);

    enum Months MyMonth = February;
}

