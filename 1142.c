// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,a,b,c,d,i,j,k;
    scanf("%d", &x);
    for(i=0; i<x*4; i+=4){
        a=1+i;
        b=2+i;
        c=3+i;
        printf("%d %d %d PUM\n",a,b,c);

    }

    return 0;
}
