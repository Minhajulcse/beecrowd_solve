#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    int i, j;
    for(i=0, j=65;i<26;i++,j++)
    {
        if(ch==j)
        {
            break;
        }
    }
    printf("%d\n",++i);




    return 0;
}
