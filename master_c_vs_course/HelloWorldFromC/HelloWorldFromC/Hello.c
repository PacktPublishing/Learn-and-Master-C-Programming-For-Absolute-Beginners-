
#include <stdio.h>

void main()
{
    printf("Hello, World!\n");
    printf("My name is %s and I am %d years old\n", "Moe", 2016 - 1973);
    printf("Did you know that %c - %c = %d\n", 'a', 'A', 'a' - 'A');
    printf("15 in hex = %X\n", 15);

    int age = 32, age2=100;
    printf("%p\n%p\n", &age, &age2);
}