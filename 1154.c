#include <stdio.h>
int main()
{
    int x,sum=0;
    double avg,count=0;
    while(3)
    {
        scanf("%d", &x);
        if(x<0)
            break;
        else
        {
            sum+=x;
            count++;
        }
    }
    avg=sum/count;
    printf("%.2lf\n",avg);
    return 0;
}
