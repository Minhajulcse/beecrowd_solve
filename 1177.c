// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n[1000],t,i,j=0;
    scanf("%d",&t);
    print:

    for(i=0; i<1000; i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==t) j=0;

    }
    return 0;

}
