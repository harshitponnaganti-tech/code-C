#include <stdio.h>
#include <string.h>

int main() {
    char s[8];
    // Read the string input
    scanf("%s", s);
    
    // Compare the entered string with "WECNITK"
    if (strcmp(s, "WECNITK") == 0) {
        printf("Welcome to Web Club!\n");
    } else {
        printf("Access denied\n");
    }
    
    return 0;
}
