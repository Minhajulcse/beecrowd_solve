#include <stdio.h>

int main() {
    double A,B;
    scanf("%lf %lf",&A,&B);
    A *=3.5 ;
    B *=7.5;

    double sum = A+B;

    double MEDIA = sum/(3.5 + 7.5) ;
    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;
}

