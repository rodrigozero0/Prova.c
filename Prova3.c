#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
float numf;
printf("Digite quantas folhas você quer: "); 
scanf("%f", &numf);
{
if (numf > 100)
    printf("Você pagará R$%.2f", numf*0.20);
else
    printf("Você pagará R$%.2f", numf*0.25);
}
    return 0;
}
