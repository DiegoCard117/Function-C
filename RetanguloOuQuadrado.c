int rectOrQuad(int b, int h) {
    if(b == h) return 1;
    return 0;
}

int main() {
    int b, h;
    scanf("%d %d", &b, &h);
    printf("%d", rectOrQuad(b, h));
    return 0;
}
