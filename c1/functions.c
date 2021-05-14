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

//function chaining assignments
int chain_values(int c,int d, int e){
    c = 2;
    d = c = 4;
    e = 3;


    return c + d + e ;
}
int main()
{

    int greatest = larger(79, 86);
    printf("%i is the greatest!\n", greatest);
    greet();
    int modify_3_values = chain_values(0,0,0);
    printf("total is: %i\n", modify_3_values);
    return 0;
}