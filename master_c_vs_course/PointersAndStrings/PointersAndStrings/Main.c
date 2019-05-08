
// Pointers and Strings

#include <stdio.h>

int IsVowel(int c)
{
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'u':
    case 'U':
    case 'o':
    case 'O':
        return 1; //this is a vowel
        break;
    }
    return 0;
}

void PrintVowels(char* p)
{
    while (*p)
    { 
        if (IsVowel(*p))
            printf("%c", *p);
        p++;
    }
    printf("\n");
}

void main()
{   
    PrintVowels("Hello"); 

}
