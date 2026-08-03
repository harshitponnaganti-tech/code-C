#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y;

      
        scanf("%d %d", &x, &y);
        if(x+y>6){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }

        // Your code for each test case goes here 
    }
}
