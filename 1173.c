#include<stdio.h>
#include<math.h>
int main(){
    int n[10], i, j;
    scanf("%d", &n[0]);
    printf("N[0] = %d\n", n[0]);
    for(i=n[0] , j=1; j<10; j++){
            i *= 2;
        printf("N[%d] = %d\n", j, i);
    }




return 0;
}
