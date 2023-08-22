#include <stdio.h>
int main()
{
    int a, b ,h;
    scanf("%d %d", &a, &b );

    if (a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(b>a)
    {
        h = b - a;
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }
    else if(a>b)
    {
        h = 24 - (a-b);
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }


    return 0;
}
