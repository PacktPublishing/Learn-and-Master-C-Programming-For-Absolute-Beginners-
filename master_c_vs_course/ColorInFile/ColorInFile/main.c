
//ColorInFile: Search for text in file and highlight it (color it)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>

int oldColor = 15;

void main(int argc, char * argv[])
{
    if (argc != 3)
    {
        printf("Usage: ColorInFile.exe <text to search for> <filename>\n");
        return;
    }

    CONSOLE_SCREEN_BUFFER_INFO csbi = { 0 };

    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
    {
        oldColor = csbi.wAttributes;
    }


    char * pWordToMatch = argv[1];
    char * pFile = argv[2];

    int len = strlen(pWordToMatch);

    FILE * fp = fopen(pFile, "r");
    if (NULL == fp)
    {
        printf("Failed to open %s\n", pFile);
        return;
    }

    while (!feof(fp))
    {
        int c = fgetc(fp);
        if (EOF == c) break;

        //Let's find the string to match
        if (c == pWordToMatch[0])
        {
            char word[1000];
            int index = 0;
            do
            {
                word[index++] = c;
                c = fgetc(fp);
            } while (!feof(fp) && index < len && index < 1000 );
            word[index] = '\0';
            if (0 == strcmp(word, pWordToMatch))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 206);
                printf("%s", word);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), oldColor);
            }
            else
                printf("%s", word);
        }
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;
}
