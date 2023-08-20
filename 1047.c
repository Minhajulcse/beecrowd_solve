#include <stdio.h>
int main()
{
    int a, b, c, d;
    int h,m,hour,min;
    scanf("%d %d %d %d", &a, &b, &c, &d );
    int e = 60 * a;
    int f = 60 * c;
    int m1 = e + b;
    int m2 = f + d;
    int t = (m1 - m2);

    if(t<0)
    {
        t = -(t);
    }

    if(((a==b) && (b==c) && (c==d)) || ((a==c) && (b==d)))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if((t>60) && (c>a))
    {
        h = (t/60);
        m = (t%60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m );
    }
    else if((a>c) && (b==d))
    {
        h = 24 - (a-c);
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", h);

    }
    else if((a>c) && (b>d))
    {
        h = (24 - (a-c))*60;
        m = h - (b - d);
        hour = (m/60);
        min = (m%60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min );

    }
    else if((a>c) && (d>b))
    {
        h = (24 - (a-c))*60;
        m = h + (d-b);
        hour = (m/60);
        min = (m%60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min );

    }
    else if((a==c) && (d>b))
    {
        m = d - b;
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", m );
    }
    else if((a==c) && (b>d))
    {
        m = b - d;
        min = 60 - m;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", min );
    }






    else
    {
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", t );

    }






    return 0;
}
