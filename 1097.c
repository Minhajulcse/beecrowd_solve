#include <stdio.h>

int main() {
    int i,a=7,b=6,c=5;
    for(i=1; i<10; i=i+2){
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n",i,a,i,b,i,c);
        a = a + 2;
        b=b+2;
        c=c+2;
    }

    return 0;
}
