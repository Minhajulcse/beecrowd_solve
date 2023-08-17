
#include <stdio.h>

int main()
{
    int i, a=97, v[26];

    for (i = 0; i < 26; ++i)
        v[i]=a++;

    for (i = 0; i < 26; ++i)
        printf("%d e %c\n", v[i], v[i]);

    return 0;
}
