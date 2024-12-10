void calcJ(double c, int m , double t) {
    double total = c * m * (t / 100);
    double jur = total - c;
    printf("Devera pagar %.2lf no final, com juros de %.2lf", total, jur);
}

int main() {
    double c, t;
    int m;
    scanf("%lf %d %lf", &c, &m, &t);
    calcJ(c, m, t);
    return 0;
}
