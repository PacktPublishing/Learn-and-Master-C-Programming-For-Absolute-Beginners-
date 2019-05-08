
//How to use and declare arrays of strings in C/C++

#include <stdio.h>
#include <string.h> //We need this for string functions

/*
90-100  A   4   Excellent
80-89   B   3	Satisfactory
70-79   C   2   Mediocre
60-69   D   1   Insufficient
<60	    F   0   Failure
*/

int Percentage2GPA(int grade)
{
    //Given a grade between 0 to 100 we return a value between 0 to 4
    int gpa = (grade - 50) / 10;
    if (gpa > 4)
        gpa = 4;
    else if (gpa < 0)
        gpa = 0;

    return gpa;
}

void main()
{
    //Strings in C/C++ are char *
    char* rGPA[] = { "F", "D", "C", "B", "A" };
    char* rDescription[] = { "Excellent", "Satisfactory", "Mediocre", "Insufficient", "Failure" };

    int grade = 88;  
    int gpa = Percentage2GPA(grade);

    printf("Your grade is %d which is equivalent to %d\n", grade, gpa);
    printf("Your GPA is %s\n", rGPA[gpa]);
    printf("Your results were '%s'\n", rDescription[4 - gpa]);
}
