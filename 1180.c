// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int min=ar[0],position;
    for(int i=1; i<n; i++){
        if(min>ar[i]){
            min=ar[i];
            position = i;

        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,position);

    return 0;

}
