#include<stdio.h>

main(){
    int c;
    long line=0;
    while((c = getchar()) != EOF){
        if(c == '\n'){ //character constant value here is 10
            line++;
        }
        printf("%ld",line);
    }
}