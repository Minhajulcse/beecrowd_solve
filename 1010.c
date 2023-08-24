#include <stdio.h>

int main() {
    int m,n;
    double o;
    scanf("%d %d %lf",&m,&n,&o);

    int a,b;
    double c;
    scanf("%d %d %lf",&a,&b,&c);

    printf("VALOR A PAGAR: R$ %.2lf\n", (n*o)+(b*c));

    return 0;
}
