
#include <stdio.h>

int evenNum(int a, int b, int c) {
    int arr[3] = {a, b, c};
    int n = 0;
    for(int i = 0; i < 3; i++) {
        if(arr[i] % 2 == 0) {
            n++;
        }
    }

    return n;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", evenNum(a, b, c));
    return 0;
}
