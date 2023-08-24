#include <stdio.h>

int main(){
    int n,h,f,t,ten,five,two,one,temp;
    scanf("%d",&n);
    h = n/100;
    temp = n%100;
    f = temp/50;
    temp = temp%50;
    t = temp/20;
    temp = temp%20;
    ten = temp/10;
    temp = temp%10;
    five = temp/5;
    temp = temp%5;
    two = temp/2;
    temp = temp%2;
    one = temp;

    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",h);
     printf("%d nota(s) de R$ 50,00\n",f);
      printf("%d nota(s) de R$ 20,00\n",t);
       printf("%d nota(s) de R$ 10,00\n",ten);
        printf("%d nota(s) de R$ 5,00\n",five);
         printf("%d nota(s) de R$ 2,00\n",two);
          printf("%d nota(s) de R$ 1,00\n",one);

    return 0;


}
