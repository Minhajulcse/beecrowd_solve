#include <stdio.h>
int main()
{
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d );
    a = a * 2;
    b = b * 3;
    c = c * 4;
    d = d * 1;
    float avg = (a+b+c+d)/(2+3+4+1);
    printf("Media: %.1f\n", avg);

    if(avg>7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if((avg>=5.0) && (avg<7.0))
    {
        printf("Aluno em exame.\n");
        float d;
        scanf("%f", &d);
        printf("Nota do exame: %.1f\n", d);
        float avarege = (avg + d)/2.0;
        if(avarege>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avarege<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", avarege);
    }




    return 0;
}
