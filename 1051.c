#include <stdio.h>

int main(){
    double s, r;
    scanf("%lf", &s);

    if(s <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (s >= 2000.01 && s <= 3000.00)
    {
        r = (s - 2000.00)*0.08;
        printf("R$ %.2f\n", r );
    }
    else if (s >= 3000.01 && s <= 4500.00)
    {
        r = ((s - 3000.00)*0.18 + 1000.00*0.08);
        printf("R$ %.2f\n", r);
    }
    else if (s >= 4500.01)
    {
        r = ((s - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
        printf("R$ %.2f\n", r );
    }
    return 0;
}
