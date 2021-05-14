#include <stdio.h>

// function example
int larger(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{

    int greatest = larger(79, 86);
    printf("%i is the greatest!\n", greatest);

    return 0;
}