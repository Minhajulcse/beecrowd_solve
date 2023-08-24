#include <stdio.h>
int main()
{
    int n,y,m,d;
    scanf("%d",&n);

    y = n/365;
    int temp = n%365;
    m = temp/30;
    temp = temp%30;
    d = temp;

    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);





    return 0;
}
