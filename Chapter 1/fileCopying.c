#include <stdio.h>

//copy input to output

main(){
    int c; //type big enough to hold any value c can take up, EOF > in size for char to be used
    c= getchar();
    while(c != EOF){
        putchar(c);
        c = getchar(); ///print the characters one by one
    }
}