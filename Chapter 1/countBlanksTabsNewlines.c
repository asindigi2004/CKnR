#include <stdio.h>

main(){
    int c;
    long blanks = 0;
    long tabs = 0;
    long newlines = 0;
    while((c=getchar()) != EOF){
        if(c == ' ')blanks++;
        else if(c == '\t')tabs++;
        else if(c == '\n')newlines++;
    }
    printf("The number of blanks = %ld, tabs = %ld and newlines = %ld\n", blanks, tabs, newlines);
}