
// Using bitwise operators

#include <stdio.h>

int BitCount(unsigned int n)
{
    int count = 0;

    while (n > 0)
    {
        if (n & 1)
            count++;
        n >>= 1;
    }

    return count;
}

void main()
{
    int a = 4;  //100
    int b = 5;  //101

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);

    printf("~%d = %d\n", a, ~a);

    printf("%d >> 1 = %d\n", a, a >> 1);
    printf("%d << 3 = %d\n", b, b << 3);

    if (a & 1)
        printf("Bit 1 is set on this number\n");
    else
        printf("Bit 1 is NOT set on this number\n");

    for (int i = 0; i < 256; ++i)
    {
        printf("BitCount for %d = %d\n", i, BitCount(i));
    }
}