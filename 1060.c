#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f );
    float count = 0.0;
    int sub;

    if(a>0)
        count +=1.0;
        //sub = count;
    if(b>0)
        count +=1.0;
    if(c>0)
        count +=1.0;
    if(d>0)
        count +=1.0;
    if(e>0)
        count +=1.0;
        if(f>0)
            count +=1;
    printf("%.0f valores positivos\n", count);


    return 0;
}
