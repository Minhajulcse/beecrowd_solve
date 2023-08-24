#include <stdio.h>

int main() {
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    A *=2 ;
    B *=3;
    C *=5;

    double sum = A+B+C;

    double MEDIA = sum/(2+3+5) ;
    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}

