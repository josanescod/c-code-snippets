/*
stack -> variables inside functions
heap
globals -> variables outside functions
constants
code


*/

#include <stdio.h>

//function
void go_south_east(int lat, int lon)
{
    //stored in stack
    lat = lat - 1;
    lon = lon + 1;
}

//stored in globals
int x = 1;

int main()
{
    printf("x is stored at %p\n", &x);
    //stored in stack
    int latitude = 32;
    int longitude = -64;
    go_south_east(latitude, longitude);
    printf("Avast! now at: [%i,%i]\n", latitude, longitude);
    return 0;
}