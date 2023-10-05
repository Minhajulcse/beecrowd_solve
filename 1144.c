// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,a,b,c,d,i;
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        a = i*i;
        b=i*i*i;
        printf("%d %d %d\n",i,a,b);
        c=a+1;
        d=b+1;

        printf("%d %d %d\n",i,c,d);
    }

    return 0;
}
