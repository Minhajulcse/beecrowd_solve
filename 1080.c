#include <stdio.h>
int main()
{
    int num[10],x=0,y,i;

    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i< 10; i++){
        if(num[i] > x)
        {
            x = num[i];
            y =i+1;

        }
    }

    printf("%d\n", x);
    printf("%d\n", y);








    return 0;
}
