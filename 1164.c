#include <stdio.h>
int main()
{
    int n,x, sum=0, rem=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        for (int i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum =sum+i;

            }
        }
        if(sum==x)
        printf("%d eh perfeito\n", x);
        else{
            printf("%d nao eh perfeito\n", x);
        }
        int rem = sum;
        sum = 0;

    }

   // printf("%d\n", sum);



    return 0;
}
