#include <stdio.h>

int main() {
    int x=1,y=1,i=0;
    while(y>0 && x>0){
        int sum=0;
        scanf("%d %d", &x, &y);
        if(y<=0 || x<=0) break;
        if(x>y){
            int temp = x;
            x = y;
            y = temp;
        }
        for(i=x; i<=y; i++){
            printf("%d ",i);
            sum +=i;
        }
        printf("Sum=%d\n",sum);
    }

    return 0;
}

