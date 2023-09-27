#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        int x,y,sum=0;
        scanf("%d %d", &x, &y);
        if(x>y){
            int temp = x;
            x = y;
            y = temp;
        }
        for(k=x+1; k<y; k++){
            if(k%2==1) sum +=k;
        }
        printf("%d\n", sum);
    }

    return 0;
}
