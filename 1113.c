#include <stdio.h>

int main() {
    int x=1,y=1,i=0;
    while(y>0 && x>0){
        scanf("%d %d", &x, &y);
        if(x==y) break;
        if(x>y) printf("Decrescente\n");
        else printf("Crescente\n");
    }

    return 0;
}
