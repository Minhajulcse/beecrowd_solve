#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    double m = (float)(x*y)/12;
    printf("%.3lf\n",m);
    return 0;

}
