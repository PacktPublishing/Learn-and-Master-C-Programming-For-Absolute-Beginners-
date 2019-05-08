//Using switch in C

#include <stdio.h>

/*
Grades
A+ :100 – 97
A  :96 – 93
A- :92 – 90
B+ :89 – 87
B  :86 – 83
B- :82 – 80
C+ :79 – 77
C  :76 – 73
C- :72 – 70
D+ :69 – 67
D  :66 – 63
D- :62 – 60
F  :Below 60
*/

void DisplayGradeName(float grade)  
{
    switch ((int)grade)
    {
    case 100:
    case 99:
    case 98:
    case 97:
        printf("A+\n");
        break;
    case 96:
    case 95:
    case 94:
    case 93:
        printf("A\n");
        break;
    case 92:
    case 91:
    case 90:
        printf("A-\n");
        break;
    case 89:
    case 88:
    case 87:
        printf("B+\n");
        break;
    case 86:
    case 85:
    case 84:
    case 83:
        printf("B\n");
        break;
    case 82:
    case 81:
    case 80:
        printf("B-\n");
        break;
    default:
        printf("%f is not graded yet\n", grade);
        break;
    }

}


void main()
{
    DisplayGradeName(77);
}
