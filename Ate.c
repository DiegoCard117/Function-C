#include <stdio.h>

int until(int n) {
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    until(a);
    return 0;
}

