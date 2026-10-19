#include <stdio.h>

int main() {
int R, B;
scanf("%d %d", &R, &B);

int green = (R < B) ? R : B;
int skill = green * 5 + (R - green) * 1 + (B - green) * 2;

printf("%d\n", skill);

return 0;

}
