// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n[100];
    double x;
    scanf("%lf",&x);
    for(int i=0; i<100; i++){
        printf("N[%d] = %0.4lf\n",i,x);
        x = x/2;
    }

}
