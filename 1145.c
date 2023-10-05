// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,y,i,j,k;
    scanf("%d %d", &x, &y);
    for(i=1; i<=y; i+=x){
        for(j=0; j<x-1; j++){
            printf("%d ",i+j);
        }
        for(k=x-1; k<=x-1; k++){
            printf("%d",i+k);
        }
        printf("\n");
    }


    return 0;
}
