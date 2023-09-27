#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        double x,y;
        scanf("%lf %lf", &x, &y);
        if(x==0) printf("0.0\n");
        else if(y==0) printf("divisao impossivel\n");
        else printf("%.1lf\n", (x/y));
    }

    return 0;
}

