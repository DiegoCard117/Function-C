#include <stdio.h>

int delta(int a, int b, int c) {
    int deltaN;
    deltaN = (b*b) - 4 * (a * c);
    return deltaN;
}

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", delta(a, b, c));

    return 0;
}
