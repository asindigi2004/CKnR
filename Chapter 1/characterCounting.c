#include<stdio.h>

main(){
    long c = 0;
    while(getchar() != EOF){
        ++c;
    }
    printf("%ld",c);
}