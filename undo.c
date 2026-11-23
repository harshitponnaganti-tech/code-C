#include <stdio.h>
#include <string.h>

#define MAX_LEN 100005

int main(void) {
    char s[MAX_LEN];
    char res[MAX_LEN];

    if (scanf("%100004s", s) != 1) {
        return 0;
    }

    int len = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '#') {
            if (len > 0) {
                len--;
            }
        } else {
            res[len++] = s[i];
        }
    }

    res[len] = '\0';
    if (len > 0) {
        printf("%s\n", res);
    }

    return 0;
}
