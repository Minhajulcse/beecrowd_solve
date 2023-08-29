#include <stdio.h>
int main()
{
    int x, n;
    int in=0, out=0;
    scanf("%d", &x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d", &n);
        if(n<=20 && n>=10)
        {
            in++;
        }
        else{
            out++;
        }

    }
    printf("%d in\n", in);
    printf("%d out\n", out);




    return 0;
}
