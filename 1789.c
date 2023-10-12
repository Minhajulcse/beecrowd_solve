// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,x;
    while(scanf("%d", &n) !=EOF){
        int ar[n],count=0;
        for(int i=0; i<n; i++){
            scanf("%d", &ar[i]);
            if(ar[i]>count) count=ar[i];
        }
        if(count<10) printf("1\n");
        else if(count < 20) printf("2\n");
        else printf("3\n");

    }

    return 0;
}
