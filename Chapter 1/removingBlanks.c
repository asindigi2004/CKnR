#include <stdio.h>

main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            while ((c = getchar()) == ' ')
                ;   // skip extra spaces
        }
        if (c != EOF)
            putchar(c);
    }
}
