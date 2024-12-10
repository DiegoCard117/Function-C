#include <stdio.h>
#include <math.h>

int delta(int a, int b, int c) {
    return (b*b) - 4 * (a * c);
}

int bhaskara(int delta, int a, int b) {
    if(delta > 0) {
        double raiz1 = (-b + sqrt(delta)) / (2.0 * a);
        double raiz2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("%.2lf %.2lf", raiz1, raiz2);
    } else if (delta == 0) {
        double raiz = -b / (2.0 * a);
        printf("%.2lf\n", raiz);
    } else {
        printf("Não existem raízes reais.\n");
    }
}

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    bhaskara(delta(a, b, c), a, b);
    return 0;
}
