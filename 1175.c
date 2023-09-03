#include<stdio.h>
int main()
{
    int n[20], i, j;
    for (i=0; i<20; i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0; i<10; i++)
    {
        int rem = 0;
        rem = n[i];

        n[i] = n[19-i];
        n[19-i] = rem;
    }
    for(i=0; i<20; i++){
        printf("N[%d] = %d\n",i, n[i] );
    }




    return 0;
}
