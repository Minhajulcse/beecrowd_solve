#include <stdio.h>
int main()
{
    int n,x;
    scanf ("%d", &n);
    for(int i=1; i<=n ; i++)
    {
        scanf ("%d",&x);

        if(x==0)

            printf("NULL\n");

        else if(x<=0 && x%2==0)
            printf ("EVEN NEGATIVE\n");

        else if(x>=0 && x%2==0)
            printf ("EVEN POSITIVE\n");

        else if(x<=0 && x%2!=0)
            printf ("ODD NEGATIVE\n");

        else if(x>=0 && x%2!=0)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}
