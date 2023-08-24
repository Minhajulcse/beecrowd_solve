#include <stdio.h>

int main() {
    int m,n;
    scanf("%d %d",&m,&n);

    double f;
    scanf("%lf",&f);

    printf("NUMBER = %d\n",m);
    printf("SALARY = U$ %.2lf\n",n*f);

    return 0;
}

