
// MyMath.c contains all my math related functions
int Sum(int a[], int count)
{
    int total = 0;

    for (int i = 0; i < count; ++i)
    {
        total += a[i];
    }

    return total;
}

int Max(int a[], int count)
{
    int max = a[0];

    for (int i = 1; i < count; ++i)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int Factorial(int n)
{
    int fact = 1;

    for (int i = n; i > 1; --i)
        fact *= i;

    return fact;
}
