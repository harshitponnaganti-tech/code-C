#include <stdio.h>

int main() {
    char c;
    if (scanf(" %c", &c) == 1) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    return 0;
}
