#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, delta , x1 ,x2;

int main(int argc, char const *argv[])
{
    printf("Digite o número de A: ");
    scanf("%f", &a);
    printf("Digite o número de B: ");
    scanf("%f", &b);
    printf("Digite o número de C: ");
    scanf("%f", &c);
    if (a != 0)
    {
        delta = (b*b) - 4*a*c;
        if (delta == 0)
        {
            x1 = (-b + sqrt(delta))/(2*a);
            printf("Delta igual a 0 \n");
            printf("x1 e x2 = %.2f", x1);
    }else
        {
            if(delta > 0) 
            {
                x1 = (-b + sqrt(delta))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                printf("Delta maior que 0\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n");
            }else
            {
                printf("Delta menor que 0\n");
                printf("Não existe raiz Real!");
            }
    }
    }else
    {
        printf("Não é uma equação do segundo grau\n");
        printf("a tem de ser diferente de 0");
    }
    return 0;
}