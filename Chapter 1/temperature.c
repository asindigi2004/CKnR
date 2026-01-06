#include <stdio.h>

#define LOWER  0
# define UPPER  300
# define STEP  20

main(){
    int f;
    float c;
    //int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    f = UPPER;

    printf("Welcome to the Fahrenheit to Celsius converter\n");
    while(f>=LOWER){
        c = (5.0/9.0)*(f - 32.0);
        printf("%3d %6.1f\n",f,c);
        f-=STEP;
    }
    /*for(f = 0; f<=upper ; f+=20){
        printf("%3d %6.1f\n",f,(5.0/9.0)*(f - 32));
    }*/
}