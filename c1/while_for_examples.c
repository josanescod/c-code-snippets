#include <stdio.h>



int main(){

    int countera = 0; 
    while (countera < 5) {
        printf("%i green bottles, hanging on a wall\n", countera);
        countera++;
    }
    for (int counterb = 10; counterb > 5 ; counterb--){
        printf("%i yellow glasses, hanging on a wall\n", counterb);
    }


    puts("Fin.");
    return 0;

}
