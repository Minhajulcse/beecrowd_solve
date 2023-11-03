// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double i = 1.0, j = 1.0;
    double s = 0.0;
    while (i <= 39){
        s += i/j;
        i = i + 2;
        j = j * 2;
    }
    printf("%.2lf\n",s);


    return 0;
}
