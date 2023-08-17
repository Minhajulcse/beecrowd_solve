#include <stdio.h>
int main()
{
    int N, p, q;
    int s;
    char ch;
    scanf ("%d %d %c %d", &N, &p, &ch, &q);

    switch(ch)
    {
    case '+':
        s = p+q;
        if(s>N)
        {
            printf("OVERFLOW\n");
        }
        else{
          printf("OK\n");
        }
        break;
    case '*':
        s = p * q;
           if(s>N)
        {
            printf("OVERFLOW\n");
        }
        else{
          printf("OK\n");
        }


    }



    return 0;
}
