int sumBigSmall(int a, int b, int c) {
    int arr = {a, b, c};
    int maior = arr[0];
    int menor;
    for(int i = 0; i < 3; i ++){
        if(maior < arr[i]) {
            maior = arr[i];
        }
        if(menor > arr[i]) {
            menor = arr[i];
        }
    }
    int total = maior + menor;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf(%d, sumBigSmall);
    return 0;

}
