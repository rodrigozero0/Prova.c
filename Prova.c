#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
int N, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%i", &N);
 
 for (i = 2; i <= N / 2; i++) {
    if (N % i == 0) {
       resultado++;
    }
 }
 if (resultado == 0)
    printf("O NÚMERO QUE DIGITOU É PRIMO");
 else
    printf("O NÚMERO QUE DIGITOU NÃO É PRIMO");
    return 0;
}
