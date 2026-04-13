#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int diff1 = abs(a-b);
    int diff2 = abs(c-d);
    if(diff1<diff2)
    {
        printf("first\n");
    }
    else if(diff1>diff2)
    {
        printf("second\n");
    }
    else
    {
        printf("both\n");
    }
    return 0;
 

}

