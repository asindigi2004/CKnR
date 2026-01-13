#include <stdio.h>

int main(void) {
    unsigned char uc = (unsigned char) ~0;
    signed char sc = uc >> 1;

    printf("Signed char:   %d to %d\n", -sc - 1, sc);
    printf("Unsigned char: 0 to %u\n\n", uc);

    unsigned short us = (unsigned short) ~0;
    signed short ss = us >> 1;

    printf("Signed short:  %d to %d\n", -ss - 1, ss);
    printf("Unsigned short: 0 to %u\n\n", us);

    unsigned int ui = (unsigned int) ~0;
    signed int si = ui >> 1;

    printf("Signed int:    %d to %d\n", -si - 1, si);
    printf("Unsigned int:  0 to %u\n\n", ui);

    unsigned long ul = (unsigned long) ~0;
    signed long sl = ul >> 1;

    printf("Signed long:   %ld to %ld\n", -sl - 1, sl);
    printf("Unsigned long: 0 to %lu\n", ul);

    return 0;
}
