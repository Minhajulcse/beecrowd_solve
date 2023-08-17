#include <stdio.h>
int main()
{
    int i , j;
    scanf("%d %d", &i, &j );
    long long int sum = 0;

    for (i ; i<=j ; i++)
    {
      sum = sum + i;
    }


        printf("%lld\n", sum);




    return 0;
}
