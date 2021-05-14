#include <stdio.h>

// function example
int larger(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

//function void example
void greet(){
    puts ("Hello mr Smith");
}
int main()
{

    int greatest = larger(79, 86);
    printf("%i is the greatest!\n", greatest);
    greet();

    return 0;
}