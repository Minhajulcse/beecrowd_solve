#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e );
    int count = 0;
    //float sum = 0.0;
    //int sub;

    if(a%2==0)
    {
        count +=1.0;
       // sum += a;
    }

    //sub = count;
    if(b%2==0)
    {
        count +=1.0;
       // sum += b;
    }

    if(c%2==0)
    {
        count +=1.0;
        //sum += c;
    }

    if(d%2==0)
    {
        count +=1.0;
        //sum += d;
    }
    if(e%2==0)
    {
        count +=1.0;
        //sum += e;
    }
    //float avg = (sum/count);

    printf("%d valores pares\n", count);
    //printf("%.1f\n", avg);


    return 0;
}


