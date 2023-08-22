#include <stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d", &x);

    if(x%2==0)
    {
       y =x+11;
       for (int i=x+1; i<=y; i+=2)
       {
         printf("%d\n", i );
       }
    }


    else{
        y =x+10;
        for (int i=x; i<=y; i+=2)
       {
         printf("%d\n", i );
       }
    }


    return 0;
}
