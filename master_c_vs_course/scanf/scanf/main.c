
// How to use scanf to recieve user input

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void FlushInput()
{
    //Must be called after scanf
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
        /*skip it*/;
}

void FlushInput2()
{
    fseek(stdin, 0, SEEK_END);
}

void main()
{
    int age;
    char gender;

    char name[21];

    printf("Hi, please enter your name: ");
    if (NULL == gets_s(name, 21))
    {
        //Error
        printf("Something went wrong!\n");
    }

    printf("Hi, please enter your name: ");
    int ret = scanf("%20s", name);
    if (ret != 1 || ret == EOF || feof(stdin) || ferror(stdin))
    {
        //Error
        printf("Something went wrong!\n");
    }

    
    
    printf("Hi %s, nice to meet you!\n", name);

    printf("%s, please enter your age: ", name);
    ret = scanf("%d", &age);
    if (ret != 1 || ret == EOF || feof(stdin) || ferror(stdin))
    {
        //Error
        printf("Something went wrong!\n");
    }
    printf("%s, please tell me are you male or female? (M/F)?: ", name);
    scanf(" %c", &gender);

    printf("%s, you're a %s who is %d years old!\n",
            name,
            (gender == 'M' || gender == 'm') ? "Male" : "Female",
            age
        );
}

int volatile done = 0;


