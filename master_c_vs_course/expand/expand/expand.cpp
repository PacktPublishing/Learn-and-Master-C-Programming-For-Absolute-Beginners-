// expand.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <Windows.h>

char Byte[256][9];

void IntToBin(int n, char * p, int size)
{
    if (NULL == p)
        return;
    
    const int bitCount = 8;
    if (size < bitCount)
        return;

    //Set all zeros
    memset(p, '0', bitCount);
    p[bitCount] = '\0';
    char * pStr = p + bitCount - 1;

    while (n>0)
    {
        if (0 == n % 2)
            *pStr = '0';
        else
            *pStr = '1';
        --pStr;
        n = n / 2;
    }
}


// Initialize array of bytes
void initArray()
{
    for (int i = 0; i < 256; ++i)
        IntToBin(i, Byte[i], 8);
}

int main(int argc, char * argv[])
{
    if (argc != 3)
    {
        printf("expand <in file> <out file>\n");
        return -1;
    }
    
    initArray();

    FILE * inFile, * outFile;
    inFile = fopen(argv[1], "rb");
    if (inFile == NULL)
    {
        printf("Couldn't find or read %s\n", argv[1]);
        return -2;
    }

    outFile = fopen(argv[2], "wt");
    if (outFile == NULL)
    {
        printf("Couldn't create %s\n", argv[2]);
        fclose(inFile);
        return -3;
    }
    
    unsigned char buff;

    while (!feof(inFile))
    {
        if (1 == fread(&buff, 1, 1, inFile))
        {
            fputs(Byte[buff], outFile);
        }
    }

    fclose(inFile);
    fclose(outFile);

    return 0;
}

