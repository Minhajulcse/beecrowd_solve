#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("Ho");
        if(i<n)
            printf(" ");
        else
            printf("!\n");
    }



return 0;
}
