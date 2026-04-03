#include <stdio.h>

int main() {
    char s[3];
    scanf("%s",&s);
    if((s[0]=='c' || s[1]=='c' || s[2]=='c')&&(s[0]=='a' || s[1]=='a' || s[2]=='a')&&(s[0]=='t' || s[1]=='t' || s[2]=='t')){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
	// your code goes here

}

