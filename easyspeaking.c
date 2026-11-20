#include <stdio.h>

int is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n;
        char s[105];
        scanf("%d", &n);
        scanf("%104s", s);

        int consecutive_consonants = 0;
        int hard_to_pronounce = 0;

        for (int i = 0; i < n; i++) {
            if (is_vowel(s[i])) {
                consecutive_consonants = 0;
            } else {
                consecutive_consonants++;
                if (consecutive_consonants >= 4) {
                    hard_to_pronounce = 1;
                    break;
                }
            }
        }

        printf("%s\n", hard_to_pronounce ? "Yes" : "No");
    }

    return 0;
}
