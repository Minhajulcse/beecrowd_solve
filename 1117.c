// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double x,count=0,sum=0;
    while(1){
        scanf("%lf", &x);
        if(x>=0 && x<=10) {
            count++;
            sum += x;
        }
        else{
            printf("nota invalida\n");
        }
        if(count==2) break;
    }
    printf("media = %.2lf\n", sum/2.00);


    return 0;
}
