void evenBetween(int n1, int n2) {
    int total;
    for(int i = n1; i <= n2; i++) {
        if(i % 2 == 0) {
            total += i;
        }
    }
    printf("%d", total);
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    evenBetween(n1, n2);
    return 0;
}
