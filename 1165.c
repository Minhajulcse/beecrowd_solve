#include <stdio.h>
int main()
{
    int x, i, j, n, count=0 , rem=0;
    scanf("%d", &x);

    for(i=1; i<=x; i++)
    {
        scanf("%d", &n);
        for(j=2; j<n; j++)
        {
            if(n%j==0){
                count = count +1;
            }
        }
        if(count>0)
            printf("%d nao eh primo\n", n);
        else
        {
            printf("%d eh primo\n",n);
        }
        rem = count;
        count = 0;
    }




    return 0;
}
