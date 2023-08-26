#include<stdio.h>
int main()
{
    float a, b, c;
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        printf("%.1f\n", (a*2+b*3+c*5)/(10.00));
    }




    return 0;
}
