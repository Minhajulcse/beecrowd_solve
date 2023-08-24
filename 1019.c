#include <stdio.h>
int main()
{
    int n,h,m,s;
    scanf("%d",&n);

    h = n/3600;
    int temp = n%3600;
    m = temp /60;
    temp = temp%60;
    s = temp ;

    printf("%d:%d:%d\n",h,m,s);





    return 0;
}

