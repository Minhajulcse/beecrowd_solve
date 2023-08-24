#include <stdio.h>

int main() {
    char string[10];
    scanf("%s",&string);
    double m,n;
    scanf("%lf %lf",&m,&n);

    n= n*0.15;

    printf("TOTAL = R$ %.2lf\n",m+n);

    return 0;
}
