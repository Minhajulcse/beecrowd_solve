#include <stdio.h>
int main()
{
    int n;
    int even = 0, odd=0,pos=0,neg=0;

    for (int i=1; i<=5; i++)
    {
        scanf("%d", &n);
        if(n<0)
            neg++;
        if(n>0)
            pos++;
        if(n%2==0)
            even++;
        if(n%2!=0)
            odd++;
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);


    return 0;
}
