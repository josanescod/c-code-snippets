#include <stdio.h>

int main()
{

    char hello[10] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    int count = 0;
    int countdown = 9;
    puts(hello);
    printf("%s\n", hello);
    printf("%c\n", hello[5]);

    while (count < 10)
    {

        printf("%c %c\n", hello[count], hello[countdown]);
        count++;
        countdown--;
    }

    return 0;
}