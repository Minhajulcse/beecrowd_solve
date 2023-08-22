#include <stdio.h>
int main()
{
    int a, b, c, d;
        int e, f, g, h;

    int seconds;

    scanf("Dia %d",&a);
    scanf("%d : %d : %d\n",&b,&c,&d);
    scanf("Dia %d",&e);
    scanf("%d : %d : %d",&f,&g,&h);

    a = a * 24;
    b = (b + a) * 60;
    c = (c + b) * 60;
    d = d + c;


    e = e * 24;
    f = (f + e) * 60;
    g = (g + f) * 60;
    h = h + g;

    seconds = d - h;
    //printf("%d\n", seconds);

    if (seconds<0)
    {
        seconds = -(seconds);
    }
    int div, rem;

    printf("%d dia(s)\n", seconds/86400);
    rem = seconds%86400;

    printf("%d hora(s)\n", rem/3600);
    rem = rem % 3600;

    printf("%d minuto(s)\n", rem/60);
    rem = rem%60;

    printf("%d segundo(s)\n", rem);








   // printf("%d : %d : %d\n", b,c,d);


    return 0;
}
