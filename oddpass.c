#include <stdio.h>

int main() {
    char s[6]; // Array of size 6 to store the 5-character string + null terminator
    
    // Read the input string
    scanf("%s", s);
    
    // Print the 1st (index 0), 3rd (index 2), and 5th (index 4) characters
    printf("%c%c%c\n", s[0], s[2], s[4]);
    
    return 0;
}
