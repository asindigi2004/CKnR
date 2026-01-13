#include <stdio.h>
#include <stdio.h>

int htoi(const char s[]) {
    int i = 0;
    int n = 0;
    int digit;

    if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X'))
        i += 2;

    for (; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            digit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            digit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            digit = s[i] - 'A' + 10;
        else
            break;   /* not a hex digit */

        n = 16 * n + digit;
    }

    return n;
}

int main(void) {
    printf("%d\n", htoi("0x1f"));   // 31
    printf("%d\n", htoi("2A"));     // 42
    printf("%d\n", htoi("0XFF"));   // 255
    printf("%d\n", htoi("123"));    // 291

    return 0;
}

