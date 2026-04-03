#include <stdio.h>

int main() {
    int x,y,n;
    scanf("%d %d %d",&n,&x,&y);
    if(n>=2*x&&n>=2*y){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
    
	// your code goes here

}

