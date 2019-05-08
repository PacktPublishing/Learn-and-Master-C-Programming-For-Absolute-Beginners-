
//Using struct keyword to define our own data types

#include <stdio.h>

/*
struct keyword is used to define your own custom data types

1. How to declare a struct?
struct tag {
    Members...
};

2. How to use it?
struct tag myvar;
*/

struct Point {
    int x;
    int y;
};

struct Rectangle {

    struct Point pt1;
    struct Point pt2;
};

struct Employee
{
    char name[100];
    int age;
    int empID;
    float Salary;
};

void PrintPoint(struct Point pt)
{
    printf("X=%d and Y=%d\n", pt.x, pt.y);
}

void main()
{
    struct Point pt1, pt2;
    
    pt1.x = 100;
    pt1.y = 100;

    pt2.x = 200;
    pt2.y = 300;

    struct Point pt3 = { 150, 130 };

    PrintPoint(pt1);
    PrintPoint(pt2);
    PrintPoint(pt3);

    struct Rectangle rc1;

    rc1.pt1 = pt1;
    rc1.pt2 = pt2;

    //Let's define a list of employees
    struct Employee employees[100];

    strcpy(employees[0].name, "employee 0");

}


